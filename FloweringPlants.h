#pragma once
#include "Plants.h"

class FloweringPlants: public Plants {
public:
    void changePopulation();
    bool checkReproductiveAbility();
    void eat(::Population *prey);
};
