#pragma once
#include "SeaChecker.h"
#include "SeaCreature.h"
#include "SeaCreatureBuilder.h"
#include <string>

class CommunicationFacade;

class SeaPlusPlusEngine{
    public:
        SeaPlusPlusEngine();
        ~SeaPlusPlusEngine();

        void setCreatureType(std::string type);
        void setCreatureSpecie(std::string specie);
        void setCreatureLength(int length);
        void setCreatureHasEggs(bool hasEggs);
        std::string getCreatureType();

        bool buildAndValidateCreature();
        SeaCreature* getCreature();

    private:
        SeaCreatureBuilder* builder;
        SeaChecker* checker;
        SeaCreature* currentCreature;
};