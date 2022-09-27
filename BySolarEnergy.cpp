#include "BySolarEnergy.h"

BySolarEnergy::BySolarEnergy(int populationCount, float massOfOneObject, float energy, std::string name): Bacterias(populationCount, massOfOneObject, energy, std::string name) {};

bool BySolarEnergy::checkReproductiveAbility() {
    return true;
};

void BySolarEnergy::reproduce() {
    setPopulationCount(getEnergy() / getOneMass()); //сколько осталось после кормежки + могли размножится дополнительно
    comboreproduce(); //бахают в большое размножение, потому что бактерии
    setPopulationCount(getPopulationCount() * 0.7); //старение
};

void BySolarEnergy::eat(Population* prey) {
    setEnergy(getPopulationCount() * getOneMass()) ;
};

