#pragma once
#include "AnglerEngine.h"
#include "SeaPlusPlusEngine.h"
#include <string>

class CommunicationFacade{
    public:
        CommunicationFacade(SeaPlusPlusEngine* engine, AnglerEngine* anglerEngine);
        void printInstructions();   
        bool setAngler();
        bool getCreatureType();
        bool getCreatureSpecie();
        bool getCreatureLength();
        bool getCreatureEggStatus();

        void addCreatureToBag();
        bool checkBag();
        
    private:
        bool checkRestart(std::string input);
        std::string lowerCaseInput(std::string input);
        SeaPlusPlusEngine* engine;
        AnglerEngine* anglerEngine;
};