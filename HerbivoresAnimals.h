#pragma once
#include "Animals.h"

class HerbivoresAnimals: public Animals {
    HerbivoresAnimals(int populationCount, float massOfOneObject, float energy, std::string name);
    bool checkReproductiveAbility();
    void changePopulation();
    void eat(Population *prey);
};

