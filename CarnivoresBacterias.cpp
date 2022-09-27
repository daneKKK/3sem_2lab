#include "CarnivoresBacterias.h"

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

