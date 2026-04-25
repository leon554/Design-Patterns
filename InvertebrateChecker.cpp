#include "headerFiles/InvertebrateChecker.h"
#include "headerFiles/SeaCreature.h"
#include "headerFiles/db.h"

bool InvertebrateChecker::canKeep(SeaCreature* creature){
    const Creature* creatureRules = nullptr;

    for (const auto& c : data.invertebrates){
        if (c.specie == creature->specie){
            creatureRules = &c;
            break;
        }
    }

    if (creatureRules){
        if(creatureRules->bag_limit == 0) return false;
        bool canCarryEggs = !creatureRules->must_return_if_carrying_eggs;

        if(creatureRules->size_limit_cm.size() == 0){
            if(canCarryEggs || (!canCarryEggs && !creature->hasEggs)){
                return true;
            }else{
                return false;
            }
        }

        int maxLength = creatureRules->size_limit_cm[1] == -1 ? INT_MAX : creatureRules->size_limit_cm[1];
        int minLength = creatureRules->size_limit_cm[0];
        if(creature->length >= minLength && creature->length <= maxLength){
             if(canCarryEggs || (!canCarryEggs && !creature->hasEggs)){
                return true;
            }else{
                return false;
            }
        }
    }
    return false;
}