#pragma once
#include "SeaChecker.h"

class InvertebrateChecker: public SeaChecker{
    public:
        bool canKeep(SeaCreature* creature) override;
};