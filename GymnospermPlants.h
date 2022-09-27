#pragma once
#include "Plants.h"

class GymnospermPlants: public Plants {
public:
    void changePopulation();
    bool checkReproductiveAbility();
    void eat(::Population prey);
};
