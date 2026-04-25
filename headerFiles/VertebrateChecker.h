#pragma once
#include "SeaChecker.h"

class VertebrateChecker: public SeaChecker{
    public:
        bool canKeep(SeaCreature* creature) override;
};