#include "./headerFiles/VertebrateCreature.h"

VertebrateCreature::VertebrateCreature(std::string name, int length, bool hasEggs) :
    SeaCreature(name, length, hasEggs){};

std::string VertebrateCreature::getType(){
    return "Vertebrate";
}