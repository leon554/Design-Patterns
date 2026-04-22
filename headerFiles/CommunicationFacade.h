#pragma once
#include <string>


class CommunicationFacade{
    public:
        void printInstructions();   
        void restart();
        bool getCreatureType();
        bool getCreatureName();
        bool getCreatureLength();
        bool getCreatureEggStatus();
        bool canKeepCreature();
    private:
        bool checRestart(std::string input);
        bool checkCreatureSearch(std::string input);
};