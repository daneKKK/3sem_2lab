#pragma once
#include "Bacterias.h"

class CarnivoresBacterias: public Bacterias {
public:
    CarnivoresBacterias(int populationCount, float massOfOneObject, float energy, std::string name);

    bool checkReproductiveAbility();
    void reproduce();

    //void changePopulation();
    void eat(::Population *prey);
};
