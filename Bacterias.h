#pragma once
#include "Population.h"

class Bacterias: public Population {
public:
    Bacterias(int populationCount, float massOfOneObject, float energy, std::string name);
    void comboreproduce();
    bool checkDeath();
};
