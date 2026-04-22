#pragma once
#include "SeaCreature.h"
#include <string>

class SeaCreatureFactory{
    public:
        static SeaCreature* create(std::string type, std::string name, int length, bool hasEggs);
};