#pragma once
#include "Plants.h"

class FloweringPlants: public Plants {
public:
    FloweringPlants(int populationCount, float massOfOneObject, float energy, std::string name) {};
    void changePopulation();
    bool checkReproductiveAbility();
    void eat(::Population *prey);
};
