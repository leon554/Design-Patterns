#include "headerFiles/SeaCreature.h"
#include "headerFiles/SeaCreatureFactory.h"
#include <iostream>
#include <ostream>
using namespace std;

int main() {
    cout << "Hello, World!" << endl;

    SeaCreature* salmon = SeaCreatureFactory::create("Vertebrate", "salmon", 28, true);
    SeaCreature* crab = SeaCreatureFactory::create("Invertebrate", "crab", 10,true);

    cout << "Can keep salmon: " << (salmon->canKeep() ? "[yes]" : "[no]") << endl;
    cout << "Can keep crab: " << (crab->canKeep() ? "[yes]" : "[no]") << endl;
    return 0;
}