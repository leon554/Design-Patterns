#pragma once
#include <string>
#include <vector>

struct Creature {
    int id;
    std::string specie;
    std::vector<double> size_limit_cm;
    bool must_return_if_carrying_eggs;
};

struct Database {
    std::vector<Creature> vertebrates;
    std::vector<Creature> invertebrates;
};

extern Database data;