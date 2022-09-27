#pragma once
#include "Bacterias.h"

class BySolarEnergy: public Bacterias {
public:
    BySolarEnergy(int populationCount, float massOfOneObject, float energy, std::string name);

    bool checkReproductiveAbility();
    //void reproduce();

    void changePopulation();
    void eat(Population* prey);

};
