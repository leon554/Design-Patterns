#pragma once
#include <string>
#include "SeaCreature.h"

class VertebrateCreature: public SeaCreature{
    public: 
        VertebrateCreature(std::string name, int length, bool hasEggs);
        bool canKeep() override;
};