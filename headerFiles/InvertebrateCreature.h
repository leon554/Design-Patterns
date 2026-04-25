#pragma once
#include <string>
#include "SeaCreature.h"

class InvertebrateCreature: public SeaCreature{
    public: 
        InvertebrateCreature(std::string specie, int length, bool hasEggs);
        std::string getType() override;
};