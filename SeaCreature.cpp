#include "./headerFiles/SeaCreature.h"

SeaCreature::SeaCreature(std::string name, int length, bool hasEggs){
    this->specie = name;
    this->length = length;
    this->hasEggs = hasEggs;
};
