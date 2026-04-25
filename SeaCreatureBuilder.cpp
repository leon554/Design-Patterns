#include "headerFiles/SeaCreatureBuilder.h"
#include "headerFiles/SeaCreature.h"
#include "headerFiles/SeaCreatureFactory.h"


SeaCreatureBuilder* SeaCreatureBuilder::setType(std::string type){
    SeaCreatureBuilder::type = type;
    return this;
}

SeaCreatureBuilder* SeaCreatureBuilder::setSpecie(std::string name){
    SeaCreatureBuilder::specie = name;
    return this;
}

SeaCreatureBuilder* SeaCreatureBuilder::setLength(int length){
    SeaCreatureBuilder::length = length;
    return this;
}

SeaCreatureBuilder* SeaCreatureBuilder::setHasEggs(bool hasEggs){
    SeaCreatureBuilder::hasEggs = hasEggs;
    return this;
}

SeaCreature* SeaCreatureBuilder::build(){
    return SeaCreatureFactory::create(
        SeaCreatureBuilder::type,
        SeaCreatureBuilder::specie,
        SeaCreatureBuilder::length,
        SeaCreatureBuilder::hasEggs
    );
}

std::string SeaCreatureBuilder::getType(){
    return type;
}