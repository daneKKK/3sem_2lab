#pragma once
#include "Animals.h"

class CarnivoresAnimals: public Animals {
    CarnivoresAnimals(int populationCount, float massOfOneObject, float energy, std::string name);
    bool checkReproductiveAbility();
    void changePopulation();
    void eat(::Population *prey);
};
