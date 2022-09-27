#pragma once
#include "Plants.h"

class GymnospermPlants: public Plants {
public:
    GymnospermPlants(int populationCount, float massOfOneObject, float energy, std::string name);
    void changePopulation();
    bool checkReproductiveAbility();
    void eat(::Population prey);
};
