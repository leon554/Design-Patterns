#include "./headerFiles/InvertebrateCreature.h"



InvertebrateCreature::InvertebrateCreature(std::string name, int length, bool hasEggs):
SeaCreature(name, length, hasEggs){
    this->hasEggs = hasEggs;
}

bool InvertebrateCreature::canKeep(){
    if(InvertebrateCreature::hasEggs){
        return false;
    }else{
        return true;
    }
}