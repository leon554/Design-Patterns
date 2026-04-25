#include "headerFiles/Anglers.h"
#include "headerFiles/Angler.h"
#include <algorithm>
#include <string>


void Anglers::addAngler(std::string name){
    Angler* angler  = new Angler(name);
    anglers.push_back(angler);
    currentAngler = angler;
}

void Anglers::removeAngler(int id){
    auto it = std::find_if(anglers.begin(), anglers.end(),
        [id](Angler* a) { return a->id == id; });

    if (it != anglers.end()) {
        if (currentAngler == *it) currentAngler = nullptr;
        delete *it;        
        anglers.erase(it); 
    }
}

void Anglers::setAngler(int id){
    auto it = std::find_if(anglers.begin(), anglers.end(),
        [id](Angler* a) { return a->id == id; });

    if (it != anglers.end()) {
        currentAngler = *it;
    }
}

std::string Anglers::getAnglers(){
    std::string anglersStr = "";

    for (Angler* angler : anglers) {
        anglersStr += "id: " + std::to_string(angler->id) + " - " + angler->name + "\n";
    }

    return anglersStr;
}
