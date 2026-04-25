#pragma once
#include <string>

class SeaCreature {
    public:
        std::string specie;
        int length;
        bool hasEggs;

        SeaCreature(std::string name, int length, bool hasEggs);
        virtual std::string getType() = 0;
};