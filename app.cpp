#include "headerFiles/CommunicationFacade.h"
#include "headerFiles/SeaPlusPlusEngine.h"

int main() {
  
    SeaPlusPlusEngine* engine = new SeaPlusPlusEngine();
    CommunicationFacade* cf = new CommunicationFacade(engine);

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

        cf->buildAndCheckCreature();
    }

    delete engine;
    delete cf;

    return 0;
}