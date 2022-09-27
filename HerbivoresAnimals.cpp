#include "HerbivoresAnimals.h"

HerbivoresAnimals::HerbivoresAnimals(int populationCount, float massOfOneObject, float energy, std::string name):
    Animals(populationCount, massOfOneObject, energy, name) {};

bool HerbivoresAnimals::checkReproductiveAbility() {
    return true
};

void HerbivoresAnimals::changePopulation() {
};

void HerbivoresAnimals::eat(Population *prey) {
};
