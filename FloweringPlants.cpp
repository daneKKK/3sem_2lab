#include "FloweringPlants.h"

FloweringPlants::FloweringPlants(int populationCount, float massOfOneObject, float energy, std::string name) : Plants(populationCount, massOfOneObject, energy, name) {};

void FloweringPlants::changePopulation() {
    if (this->getPopulationCount() * (this->getOneMass()) < 500) {
        this->setPopulationCount(this->getEnergy() / this->getOneMass());
        this->setEnergy(0.);
    }
    this->setPopulationCount(0.8 * this->getPopulationCount());
}

bool FloweringPlants::checkReproductiveAbility() {
    return true;
}

void FloweringPlants::eat(::Population *prey) {
    this->setEnergy(this->getPopulationCount() / 3.);
}
