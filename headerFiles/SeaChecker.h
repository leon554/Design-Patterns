#pragma once
#include "SeaCreature.h"

class SeaChecker{
    public:
        virtual ~SeaChecker() = default;
        virtual bool canKeep(SeaCreature* creature) = 0;
};