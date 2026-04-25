#pragma once
#include "SeaPlusPlusEngine.h"
#include <string>

class CommunicationFacade{
    public:
        CommunicationFacade(SeaPlusPlusEngine* engine);
        void printInstructions();   
        bool getCreatureType();
        bool getCreatureSpecie();
        bool getCreatureLength();
        bool getCreatureEggStatus();
        void buildAndCheckCreature();
    private:
        bool checkRestart(std::string input);
        std::string lowerCaseInput(std::string input);
        SeaPlusPlusEngine* engine;
};