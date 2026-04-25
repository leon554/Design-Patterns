#include "headerFiles/CommunicationFacade.h"
#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
#include "./headerFiles/db.h"
#include "headerFiles/SeaCreature.h"

CommunicationFacade::CommunicationFacade(SeaPlusPlusEngine* engine){
    this->engine = engine;
}

void CommunicationFacade::printInstructions() {
    std::cout << "Welcome to the SeaPlusPlus app!" << std::endl;
    std::cout << "See if you can keep your catch or not by simply following the steps" << std::endl;
    std::cout << "Restart at any time by responding to a question with -r" << std::endl;
    std::cout << "Press Enter to start..." << std::endl;

    std::string line;
    std::getline(std::cin, line);
}

bool CommunicationFacade::getCreatureType() {
    std::cout << "Enter creature type, Vertebrate (v) or Invertebrate (i)" << std::endl;

    std::string input;

    while (true) {
        std::getline(std::cin, input);
        input = lowerCaseInput(input);

        if (checkRestart(input)) {
            return true;
        }

        std::vector<std::string> validInputs = {
            "vertebrate", "v", "invertebrate", "i"
        };

        if (std::find(validInputs.begin(), validInputs.end(), input) != validInputs.end()) {
            std::string type = (input.find("v") == std::string::npos) ?
                "Invertebrate" :
                "Vertebrate";
            engine->setCreatureType(type);
            return false;
        }

        std::cout << "Command not found :( Try again: ";
    }
}

bool CommunicationFacade::getCreatureSpecie() {
    std::cout << "Next step is to specify creature specie, press enter to see list of species..." << std::endl;

    std::string line;
    std::getline(std::cin, line);

    if (checkRestart(line)) {
        return true;
    }
    
    const std::vector<Creature>* list = nullptr;

    std::string type = engine->getCreatureType();
    if (type == "Vertebrate") {
        list = &data.vertebrates;
    } else if (type == "Invertebrate") {
        list = &data.invertebrates;
    }

    for (const auto& c : *list) {
        std::cout << "ID: " << c.id << " - " << c.specie << std::endl;
    }

    std::cout << "Enter specie id..." << std::endl;
    std::string input;

    while (true) {
        std::getline(std::cin, input);
        input = lowerCaseInput(input);

        if (checkRestart(input)) {
            return true;
        }

        bool exists = false;
        std::string specie = "";

        for (const auto& c : *list) {
            if (c.id == std::stoi(input)) {
                exists = true;
                specie = c.specie;
                break;
            }
        }

        if (exists) {
            std::cout << specie << " Selected" << std::endl;
            engine->setCreatureSpecie(specie);
            return false;
        }

        std::cout << "Id not valid :( Try again: ";
    }
}

bool CommunicationFacade::getCreatureLength() {
    std::cout << "Enter creature length (cm)" << std::endl;

    std::string input;

    while (true) {
        std::getline(std::cin, input);
        input = lowerCaseInput(input);

        if (checkRestart(input)) {
            return true;
        }
        
        try {
            int length = std::stoi(input);
            engine->setCreatureLength(length);
            return false;
        } catch (const std::exception& e) {
            std::cout << "Length no valid, enter numbers only";
        }
    }
}

bool CommunicationFacade::getCreatureEggStatus() {
    std::cout << "Does creature have eggs yes (y) or no (n)" << std::endl;

    std::string input;

    while (true) {
        std::getline(std::cin, input);
        input = lowerCaseInput(input);

        if (checkRestart(input)) {
            return true;
        }
        
        std::vector<std::string> validInputs = {
            "yes", "y", "no", "n"
        };

        if (std::find(validInputs.begin(), validInputs.end(), input) != validInputs.end()) {
            bool hasEggs = (input.find("y") == std::string::npos) ? false : true;
            engine->setCreatureHasEggs(hasEggs); 
            return false;
        }

        std::cout << "Command not found :( Try again: ";
    }
}

void CommunicationFacade::buildAndCheckCreature(){
    bool canKeep = engine->buildAndValidateCreature();
    
    std::cout << "Successfully identified creature..." << std::endl;

    std::cout << "--------------------------------------------------" << std::endl;
    if (canKeep) {
        std::cout << "You CAN keep the creature show below!" << std::endl;
        SeaCreature* creature = engine->getCreature();

        std::cout << 
            creature->getType() <<
            ", " <<
            creature->specie <<
            ", " <<
            creature->length <<
            "cm, Has eggs: " << 
            (creature->hasEggs ? "Yes" : "No") <<
        std::endl;
    } else {
        std::cout << "You CANNOT keep this creature." << std::endl;
    }
    std::cout << "--------------------------------------------------" << std::endl;
}

bool CommunicationFacade::checkRestart(std::string input) {
    return (input.find("-r") == std::string::npos) ? false : true;
}

std::string CommunicationFacade::lowerCaseInput(std::string input){
    std::transform(input.begin(), input.end(), input.begin(), ::tolower);
    return input;
}