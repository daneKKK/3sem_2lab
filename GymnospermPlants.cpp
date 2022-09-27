#include "GymnospermPlants.h"

GymnospermPlants::GymnospermPlants(int populationCount, float massOfOneObject, float energy, std::string name) : Plants(populationCount, massOfOneObject, energy, name) {};


void GymnospermPlants::changePopulation() {
    if (this->getPopulationCount() * (this->getOneMass()) < 500) {
        this->setPopulationCount(this->getEnergy() / this->getOneMass());
        this->setEnergy(0.);
    }
    this->setPopulationCount(0.7 * this->getPopulationCount());
}

bool GymnospermPlants::checkReproductiveAbility() {
    return true;
}

void GymnospermPlants::eat(::Population prey) {
    this->setEnergy(this->getPopulationCount() / 2.5);
}
