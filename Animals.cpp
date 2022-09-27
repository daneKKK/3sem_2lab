#include "Animals.h"

Animals::Animals(int populationCount, float massOfOneObject, float energy, std::string name):
    Population(populationCount, massOfOneObject, energy, name) {};

bool Animals::checkDeath() {
    return (getPopulationCount() <= 0);
}
