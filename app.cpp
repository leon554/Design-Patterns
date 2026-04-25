#include "headerFiles/CommunicationFacade.h"
#include "headerFiles/SeaCreature.h"
#include "headerFiles/SeaCreatureFactory.h"
#include <iostream>
#include <ostream>
using namespace std;
//crl + alt + n to run

int main() {
    cout << "Hello, World!" << endl;

    // SeaCreature* salmon = SeaCreatureFactory::create("Vertebrate", "salmon", 28, true);
    // SeaCreature* crab = SeaCreatureFactory::create("Invertebrate", "crab", 10,true);

    // cout << "Can keep salmon: " << (salmon->canKeep() ? "[yes]" : "[no]") << endl;
    // cout << "Can keep crab: " << (crab->canKeep() ? "[yes]" : "[no]") << endl;

    CommunicationFacade* cf = new CommunicationFacade();


    while(true){
        bool restart = false;
        cf->printInstructions();

        restart = cf->getCreatureType();
        if(restart) continue;

        restart = cf->getCreatureSpecie();
        if(restart) continue;

        restart = cf->getCreatureLength();
        if(restart) continue;

        restart = cf->getCreatureEggStatus();
        if(restart) continue;

        cf->buildCreature();
        
        restart = cf->canKeepCreature();
    }


    return 0;
}