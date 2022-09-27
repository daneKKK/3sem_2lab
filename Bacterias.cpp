#include "Bacterias.h"

Bacterias::Bacterias(int populationCount, float massOfOneObject, float energy, std::string name): Population(populationCount, massOfOneObject, energy, std::string name) {};

void Bacterias::comboreproduce() {
    this->setPopulationCount(this->getPopulationCount() * 2);
}

bool Bacterias::checkDeath() {
    return (getPopulationCount() <= 0);
}
