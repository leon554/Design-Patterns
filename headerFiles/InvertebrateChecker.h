#pragma once
#include "SeaChecker.h"

class InvertebrateChecker: public SeaChecker{
    public:
        std::pair<bool, const Creature*> canKeep(SeaCreature* creature) override;
};