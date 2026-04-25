#pragma once
#include "SeaCreature.h"
#include "SeaCreatureFactory.h"
#include <string>

class SeaCreatureBuilder{
    public: 
        SeaCreatureBuilder* setType(std::string type);
        SeaCreatureBuilder* setSpecie(std::string name);
        SeaCreatureBuilder* setLength(int length);
        SeaCreatureBuilder* setHasEggs(bool hasEggs);
        
        SeaCreature* build();
        std::string getType();
    private:
        std::string type;
        std::string specie;
        int length;
        bool hasEggs;
};