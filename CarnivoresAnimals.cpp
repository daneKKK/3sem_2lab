#include "CarnivoresAnimals.h"

CarnivoresAnimals::CarnivoresAnimals(int populationCount, float massOfOneObject, float energy, std::string name):
    Animals(populationCount, massOfOneObject, energy, name) {};

bool CarnivoresAnimals::checkReproductiveAbility() {
    return true;
};

void CarnivoresAnimals::changePopulation() {
};

void CarnivoresAnimals::eat(Population *prey) {
};

