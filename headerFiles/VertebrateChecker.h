#pragma once
#include "SeaChecker.h"

class VertebrateChecker: public SeaChecker{
    public:
        std::pair<bool, const Creature*> canKeep(SeaCreature* creature) override;
};