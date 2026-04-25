#pragma once
#include <string>
#include "SeaCreature.h"

class VertebrateCreature: public SeaCreature{
    public: 
        VertebrateCreature(std::string specie, int length, bool hasEggs);
        std::string getType() override;
};