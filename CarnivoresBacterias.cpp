#include "CarnivoresBacterias.h"

CarnivoresBacterias::CarnivoresBacterias(int populationCount, float massOfOneObject, float energy, std::string name): Population(populationCount, massOfOneObject, energy, std::string name) {};

bool CarnivoresBacterias::checkReproductiveAbility() {
    return true;
};

void CarnivoresBacterias::reproduce() {
    setPopulationCount(getEnergy() / getOneMass()); //������� �������� ����� �������� + ����� ����������� �������������
    comboreproduce(); //������ � ������� �����������, ������ ��� ��������
    setPopulationCount(getPopulationCount() * 0.9); //��������
};

void CarnivoresBacterias::eat(Population* prey) {
    setEnergy(getPopulationCount() * (prey->getPopulationCount()) * (prey->getPopulationCount()) * (prey->getOneMass()) / 100 ); // ����� ����� � ��������, �.�. ��� ������ ������ ����, ��� ������� ���������������� �������� � ��� ������ �����, ��� �� �������� ����� ����� ����� ������
}

