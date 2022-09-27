#include "BySolarEnergy.h"

BySolarEnergy::BySolarEnergy(int populationCount, float massOfOneObject, float energy, std::string name): Bacterias(populationCount, massOfOneObject, energy, std::string name) {};

bool BySolarEnergy::checkReproductiveAbility() {
    return true;
};

void BySolarEnergy::reproduce() {
    setPopulationCount(getEnergy() / getOneMass()); //������� �������� ����� �������� + ����� ����������� �������������
    comboreproduce(); //������ � ������� �����������, ������ ��� ��������
    setPopulationCount(getPopulationCount() * 0.7); //��������
};

void BySolarEnergy::eat(Population* prey) {
    setEnergy(getPopulationCount() * getOneMass()) ;
};

