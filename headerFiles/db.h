#pragma once
#include <string>
#include <vector>

struct Group {
    int id;
    std::string name;
    int group_bag_limit;
};

struct Creature {
    int id;
    std::string specie;
    std::vector<double> size_limit_cm;
    bool must_return_if_carrying_eggs;
    int bag_limit;  // -1 = default 20, 0 = prohibited/no take
    int group_id;   // -1 if not part of a group
};

struct Database {
    std::vector<Group> groups;
    std::vector<Creature> vertebrates;
    std::vector<Creature> invertebrates;
};

extern Database data;