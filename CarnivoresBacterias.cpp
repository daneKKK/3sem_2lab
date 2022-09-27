#include "CarnivoresBacterias.h"


CarnivoresBacterias::CarnivoresBacterias(int populationCount, float massOfOneObject, float energy, std::string name) : Bacterias(populationCount, massOfOneObject, energy, name) {};

bool CarnivoresBacterias::checkReproductiveAbility() {
    return true;
};

void CarnivoresBacterias::reproduce() {
    setPopulationCount(getEnergy() / getOneMass()); //сколько осталось после кормежки + могли размножится дополнительно
    comboreproduce(); //бахают в большое размножение, потому что бактерии
    setPopulationCount(getPopulationCount() * 0.9); //старение
};

void CarnivoresBacterias::eat(Population* prey) {
    setEnergy(getPopulationCount() * (prey->getPopulationCount()) * (prey->getPopulationCount()) * (prey->getOneMass()) / 100 ); // число жертв в квадрате, т.к. чем больше особей жерт, тем быстрее распростряняются бактерии и чем больше жертв, тем из большего числа метст можно поесть
}

