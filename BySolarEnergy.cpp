#include "BySolarEnergy.h"

bool BySolarEnergy::checkReproductiveAbility() {
    return true;
};

void BySolarEnergy::reproduce() {
    setPopulationCount(getEnergy() / getOneMass()); //������� �������� ����� �������� + ����� ����������� �������������
    comboreproduce(); //������ � ������� �����������, ������ ��� ��������
    setPopulationCount(getPopulationCount() * 0.7); //��������
};

void BySolarEnergy::eat(Population* prey) {
    setEnergy(season * getPopulationCount() * getOneMass() / 2) ; //���� = 1, ����� = ����� = 2, ���� = 3 ������ ��������� �������
};

