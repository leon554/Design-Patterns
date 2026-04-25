#include "headerFiles/VertebrateChecker.h"
#include "headerFiles/SeaCreature.h"
#include "headerFiles/db.h"
#include <climits>


bool VertebrateChecker::canKeep(SeaCreature* creature){
    const Creature* creatureRules = nullptr;

    for (const auto& c : data.vertebrates){
        if (c.specie == creature->specie){
            creatureRules = &c;
            break;
        }
    }

    if (creatureRules){
        if(creatureRules->bag_limit == 0) return false;
        if(creatureRules->size_limit_cm.size() == 0) return true;
        
        int maxLength = creatureRules->size_limit_cm[1] == -1 ? INT_MAX : creatureRules->size_limit_cm[1];
        int minLength = creatureRules->size_limit_cm[0];

        if(creature->length >= minLength && creature->length <= maxLength){
            return true;
        }
    }
    return false;
}