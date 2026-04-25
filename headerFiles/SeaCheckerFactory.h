#pragma once
#include "SeaChecker.h"
#include "SeaCreature.h"
#include <string>

class SeaCheckerFactory{
    public:
        static SeaChecker* create(SeaCreature* creature);
};