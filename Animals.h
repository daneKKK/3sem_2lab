#pragma once
#include "Population.h"

class Animals: public Population {
public:
    Animals(int populationCount, float massOfOneObject, float energy, std::string name);
    bool checkDeath();
};
