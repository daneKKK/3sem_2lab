#include "Plants.h"

bool Plants::checkDeath() {
    return (getPopulationCount() < 0);
}

Plants::Plants(int populationCount, float massOfOneObject, float energy, std::string name) : Population(populationCount, massOfOneObject, energy, name) {};
