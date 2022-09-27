#pragma once
#include "Population.h"

class Plants: public Population {
public:
    bool checkDeath();
    Plants(int populationCount, float massOfOneObject, float energy, std::string name) {};
};
