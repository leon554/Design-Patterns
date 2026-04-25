#pragma once
#include "Angler.h"
#include <vector>

class Anglers{
    public:
        std::vector<Angler*> anglers;
        Angler* currentAngler = nullptr;

        void addAngler(std::string name);
        void removeAngler(int id);
        void setAngler(int id);
        std::string getAnglers();

};