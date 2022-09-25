#include "CarnivoresBacterias.h"

bool checkReproductiveAbility() {
    return true;
};

void reproduce() {
    setPopulationCount(getEnergy() / getOneMass()); //������� �������� ����� �������� + ����� ����������� �������������
    comboreproduce(); //������ � ������� �����������, ������ ��� ��������
    setPopulationCount(getPopulationCount() * 0.9) //��������
};

void CarnivoresBacterias::eat(Population* prey) {
    setEnergy(getPopulationCount() * pray.getPopulationCount() * pray.getPopulationCount() * pray.getOneMass() / 100 ) // ����� ����� � ��������, �.�. ��� ������ ������ ����, ��� ������� ���������������� �������� � ��� ������ �����, ��� �� �������� ����� ����� ����� ������
}

