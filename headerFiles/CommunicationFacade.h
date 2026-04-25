#pragma once
#include "SeaCreatureBuilder.h"
#include <string>


class CommunicationFacade{
    public:
        CommunicationFacade();
        void printInstructions();   
        bool getCreatureType();
        bool getCreatureSpecie();
        bool getCreatureLength();
        bool getCreatureEggStatus();
        bool canKeepCreature();
        void buildCreature();
    private:
        bool checkRestart(std::string input);
        std::string lowerCaseInput(std::string input);
        SeaCreatureBuilder* builder;
};