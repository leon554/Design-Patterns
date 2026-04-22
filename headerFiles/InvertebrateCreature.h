#pragma once
#include <string>
#include "SeaCreature.h"

class InvertebrateCreature: public SeaCreature{
    public: 
        InvertebrateCreature(std::string name, int length, bool hasEggs);
        bool canKeep() override;
};