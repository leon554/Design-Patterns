#include "headerFiles/AnglerEngine.h"
#include "headerFiles/Anglers.h"
#include <string>

AnglerEngine::AnglerEngine(){
    anglers = new Anglers();
}

bool AnglerEngine::isAnglerSelected(){
    return anglers->currentAngler ? true : false;
}

void AnglerEngine::setAngler(int id){
    anglers->setAngler(id);
}

void AnglerEngine::createAngler(std::string name){
    anglers->addAngler(name);
}

void AnglerEngine::addCatch(SeaCreature* creature){
    anglers->currentAngler->addCatch(creature);
}

std::vector<SeaCreature*> AnglerEngine::viewBag(){
    return anglers->currentAngler->bag;
}

bool AnglerEngine::canKeepBag(){
    return bagChecker->canKeepBag(anglers->currentAngler->bag);
}

std::string AnglerEngine::getAnglers(){
    return anglers->getAnglers();
}

Angler*  AnglerEngine::getCurrentAngler(){
    return anglers->currentAngler;
}

int AnglerEngine::getAnglerCount(){
    return anglers->anglers.size();
}

void AnglerEngine::removeCurrentAngler(){
    anglers->currentAngler = nullptr;
}

std::string AnglerEngine::printBag(){
   return anglers->currentAngler->printBag();
}