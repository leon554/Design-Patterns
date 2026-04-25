#include "./headerFiles/Angler.h"
#include "headerFiles/SeaCreature.h"
#include <string>

int Angler::nextId = 0;

Angler::Angler(std::string name){
    id = nextId++;
    this->name = name;
}

void Angler::addCatch(SeaCreature* creature){
    bag.push_back(creature);
}

std::string Angler::printBag(){
    std::string bagStr = "";

    for (SeaCreature* s : bag) {
        bagStr += s->getType() + ", " + s->specie + ", length: " + std::to_string(s->length) + "cm, Has Eggs: " + (s->hasEggs ? "Yes" : " No") +"\n";
    }

    return bagStr;
}