#include "headerFiles/SeaCreatureFactory.h"
#include "headerFiles/InvertebrateCreature.h"
#include "headerFiles/SeaCreature.h"
#include "headerFiles/VertebrateCreature.h"



SeaCreature* SeaCreatureFactory::create(std::string type, std::string name, int length, bool hasEggs){
    if(type == "Vertebrate"){
        return new VertebrateCreature(name, length, hasEggs);
    }
    if(type == "Invertebrate"){
        return new InvertebrateCreature(name, length, hasEggs);
    }
    return nullptr;
}