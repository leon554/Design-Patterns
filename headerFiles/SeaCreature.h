#pragma once
#include <string>

class SeaCreature {
    public:
        std::string name;
        int length;
        bool hasEggs;

        SeaCreature(std::string name, int length, bool hasEggs);

        virtual bool canKeep() = 0;
};