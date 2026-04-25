#include "headerFiles/SeaCheckerFactory.h"
#include "headerFiles/InvertebrateChecker.h"
#include "headerFiles/SeaChecker.h"
#include "headerFiles/SeaCreature.h"
#include "headerFiles/VertebrateChecker.h"
#include <string>

SeaChecker* SeaCheckerFactory::create(SeaCreature* creature){
    std::string type = creature->getType();

    if(type == "Vertebrate"){
        return new VertebrateChecker();
    }else{
        return new InvertebrateChecker();
    }
}