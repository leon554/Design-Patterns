#pragma once

#include "Angler.h"
#include "Anglers.h"
#include "BagChecker.h"
#include "SeaCreature.h"
#include <string>
#include <vector>

class AnglerEngine{
    public:
        AnglerEngine();

        bool isAnglerSelected();
        void setAngler(int id);
        void createAngler(std::string name);
        void addCatch(SeaCreature* creature);
        void removeCurrentAngler();
        void clearBag();
        bool canKeepBag();
        int getAnglerCount();
        
        Angler* getCurrentAngler();
        std::vector<SeaCreature*> viewBag();
        std::string getAnglers();
        std::string printBag();

    private:
        Anglers* anglers;
        BagChecker* bagChecker;
};