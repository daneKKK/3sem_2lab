#include "Bacterias.h"

void Bacterias::comboreproduce() {
    this->setPopulationCount(this->getPopulationCount() * 2);
}

bool Bacterias::checkDeath() {
    return (getPopulationCount() <= 0);
}

Bacterias::Bacterias(int populationCount, float massOfOneObject, float energy, std::string name) : Population(populationCount, massOfOneObject, energy, name) {};
