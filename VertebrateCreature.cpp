#include "./headerFiles/VertebrateCreature.h"

VertebrateCreature::VertebrateCreature(std::string name, int length, bool hasEggs) :
    SeaCreature(name, length, hasEggs){};

bool VertebrateCreature::canKeep(){
    return true;
}