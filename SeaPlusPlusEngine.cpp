#include "headerFiles/SeaPlusPlusEngine.h"
#include "headerFiles/SeaCheckerFactory.h"
#include "headerFiles/SeaCreature.h"

SeaPlusPlusEngine::SeaPlusPlusEngine(){
    builder = new SeaCreatureBuilder();
    checker = nullptr;
    currentCreature = nullptr;
}

SeaPlusPlusEngine::~SeaPlusPlusEngine(){
    if (builder) delete builder;
    if (checker) delete checker;
    if (currentCreature) delete currentCreature;
}

void SeaPlusPlusEngine::setCreatureType(std::string type){
    builder->setType(type);
}

void SeaPlusPlusEngine::setCreatureSpecie(std::string specie){
    builder->setSpecie(specie);
}

void SeaPlusPlusEngine::setCreatureLength(int length){
    builder->setLength(length);
}

void SeaPlusPlusEngine::setCreatureHasEggs(bool hasEggs){
    builder->setHasEggs(hasEggs);
}

std::string SeaPlusPlusEngine::getCreatureType(){
    return builder->getType();
}

SeaCreature* SeaPlusPlusEngine::getCreature(){
    return currentCreature;
}

bool SeaPlusPlusEngine::buildAndValidateCreature(){
    currentCreature = builder->build();
    checker = SeaCheckerFactory::create(currentCreature);
    return checker->canKeep(currentCreature);  
}
