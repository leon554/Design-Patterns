#include "headerFiles/CommunicationFacade.h"
#include <iostream>

void CommunicationFacade::printInstructions() {
    std::cout << "Instructions: (placeholder)" << std::endl;
    std::cout << "Press Enter to continue..." << std::endl;

    std::string line;
    std::getline(std::cin, line);
}

void CommunicationFacade::restart() {
    std::cout << "Restarting... (placeholder)" << std::endl;
}

bool CommunicationFacade::getCreatureType() {
    std::cout << "Getting creature type... (placeholder)" << std::endl;
    return false;
}

bool CommunicationFacade::getCreatureName() {
    std::cout << "Getting creature name... (placeholder)" << std::endl;
    return true;
}

bool CommunicationFacade::getCreatureLength() {
    std::cout << "Getting creature length... (placeholder)" << std::endl;
    return true;
}

bool CommunicationFacade::getCreatureEggStatus() {
    std::cout << "Getting creature egg status... (placeholder)" << std::endl;
    return true;
}

bool CommunicationFacade::canKeepCreature() {
    std::cout << "Checking if creature can be kept... (placeholder)" << std::endl;
    return true;
}


bool CommunicationFacade::checRestart(std::string input) {
    std::cout << "Checking restart input: " << input << std::endl;
    return false;
}

bool CommunicationFacade::checkCreatureSearch(std::string input) {
    std::cout << "Checking creature search input: " << input << std::endl;
    return false;
}