#pragma once
#include "Animals.h"

class OmnivoresAnimals: public Animals {
    OmnivoresAnimals(int populationCount, float massOfOneObject, float energy, std::string name);
    bool checkReproductiveAbility();
    void changePopulation();
    void eat(Population *prey);
};


