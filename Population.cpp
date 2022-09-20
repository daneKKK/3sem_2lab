#include "Population.h"

Population::Population(int populationCount, float massOfOneObject, float energy, std::string name): populationCount(populationCount), massOfOneObject(massOfOneObject), energy(energy), name(name) {};

int Population::getPopulationCount() {
    return populationCount;
}

void Population::setPopulationCount(int populationCountInput) {
    populationCount = populationCountInput;
}

float Population::getEnergy() {
    return energy;
}

void Population::setEnergy(float energyInput) {
    energy = energyInput;
}

float Population::getOneMass() {
    return massOfOneObject;
}

std::string Population::getName() {
    return name;
}
