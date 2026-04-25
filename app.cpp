#include "headerFiles/CommunicationFacade.h"
#include "headerFiles/SeaPlusPlusEngine.h"

int main() {
  
    CommunicationFacade* cf = new CommunicationFacade();

    cf->printInstructions();
    
    while(true){
        bool restart = false;

        restart = cf->setAngler();
        if(restart) continue;

        restart = cf->getCreatureType();
        if(restart) continue;

        restart = cf->getCreatureSpecie();
        if(restart) continue;

        restart = cf->getCreatureLength();
        if(restart) continue;

        restart = cf->getCreatureEggStatus();
        if(restart) continue;

        cf->addCreatureToBag();
        cf->checkBag();

    }
    delete cf;

    return 0;
}