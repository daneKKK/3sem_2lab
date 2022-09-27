#include "OmnivoresAnimals.h"

OmnivoresAnimals::OmnivoresAnimals(int populationCount, float massOfOneObject, float energy, std::string name):
    Animals(populationCount, massOfOneObject, energy, name) {};

bool OmnivoresAnimals::checkReproductiveAbility() {
    return true;
};

void OmnivoresAnimals::changePopulation() {
};

void OmnivoresAnimals::eat(Population *prey) {
};

