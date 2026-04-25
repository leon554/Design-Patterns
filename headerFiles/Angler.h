#pragma once
#include <string>
#include <vector>
#include "SeaCreature.h"

class Angler{
    public:
        static int nextId;
        int id;
        std::string name;
        std::vector<SeaCreature*> bag;

        Angler(std::string name);
        void addCatch(SeaCreature* creature);
        std::string printBag();

};