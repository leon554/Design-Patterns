#include "headerFiles/AnglerEngine.h"
#include "headerFiles/CommunicationFacade.h"
#include "headerFiles/SeaPlusPlusEngine.h"

int main() {
  
    SeaPlusPlusEngine* engine = new SeaPlusPlusEngine();
    AnglerEngine* anglerEngine = new AnglerEngine();
    CommunicationFacade* cf = new CommunicationFacade(engine, anglerEngine);

    while(true){
        bool restart = false;
        cf->printInstructions();

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
        
        cf->buildAndCheckCreature();
        cf->addCreatureToBag();
        cf->checkBag();

    }

    delete engine;
    delete cf;

    return 0;
}