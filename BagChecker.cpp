#include "headerFiles/BagChecker.h"
#include "headerFiles/SeaChecker.h"
#include "headerFiles/SeaCheckerFactory.h"
#include "headerFiles/SeaCreature.h"
#include <vector>
#include <unordered_map>

bool BagChecker::canKeepBag(std::vector<SeaCreature*> bag){
   
    std::unordered_map<int, int> fishPerSpecie;
    std::unordered_map<int, int> bagLimitPerSpecie;
    std::unordered_map<int, int> fishPerGroup;
    std::unordered_map<int, int> bagLimitPerGroup;

    for (SeaCreature* s : bag) {
        
        SeaChecker* checker = SeaCheckerFactory::create(s);
        auto [result, creature] = checker->canKeep(s);

        if(result){
            if(fishPerSpecie.count(creature->id) > 0){
                fishPerSpecie[creature->id] = fishPerSpecie[creature->id] + 1;
            }else{
                fishPerSpecie[creature->id] = 1;
            }

            if(creature->group_id != -1){
                if(fishPerGroup.count(creature->group_id) > 0){
                    fishPerGroup[creature->group_id] = fishPerGroup[creature->group_id] + 1;
                }else{
                    fishPerGroup[creature->group_id] = 1;
                }
            }

            if(bagLimitPerSpecie.count(creature->id) <= 0){
                bagLimitPerSpecie[creature->id] = creature->bag_limit == -1 ? 20 : creature->bag_limit;
            }

            
        }else{
            return false;
        }
    }

    for (const auto& [id, count] : fishPerSpecie) {
        if(count > bagLimitPerSpecie[id]) return false;
    }   

    for (const auto& c : data.groups){
        if(bagLimitPerGroup.count(c.id) <= 0){
            bagLimitPerGroup[c.id] = c.group_bag_limit;
        }
    }

    for (const auto& [id, count] : fishPerGroup) {
        if(count > bagLimitPerGroup[id]) return false;
    }   

    return true;

}