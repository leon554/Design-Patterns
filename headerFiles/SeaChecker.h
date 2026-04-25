#pragma once
#include "SeaCreature.h"
#include "db.h"
#include <utility>

class SeaChecker{
    public:
        virtual ~SeaChecker() = default;
        virtual std::pair<bool, const Creature*> canKeep(SeaCreature* creature) = 0;
};