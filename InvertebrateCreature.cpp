#include "./headerFiles/InvertebrateCreature.h"



InvertebrateCreature::InvertebrateCreature(std::string name, int length, bool hasEggs):
SeaCreature(name, length, hasEggs){
    this->hasEggs = hasEggs;
}

std::string InvertebrateCreature::getType(){
    return "Invertebrate";
}