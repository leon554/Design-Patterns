#pragma once
#include "AnglerEngine.h"
#include "SeaPlusPlusEngine.h"
#include <string>

class CommunicationFacade{
    public:
        CommunicationFacade(SeaPlusPlusEngine* engine, AnglerEngine* anglerEngine);
        void printInstructions();   
        bool getCreatureType();
        bool getCreatureSpecie();
        bool getCreatureLength();
        bool getCreatureEggStatus();
        void buildAndCheckCreature();

        bool setAngler();
        void addCreatureToBag();
        bool checkBag();
        
    private:
        bool checkRestart(std::string input);
        std::string lowerCaseInput(std::string input);
        SeaPlusPlusEngine* engine;
        AnglerEngine* anglerEngine;
};