#include "BySolarEnergy.h"

bool checkReproductiveAbility() {
    return true;
};

void reproduce() {
    setPopulationCount(getEnergy() / getOneMass()); //������� �������� ����� �������� + ����� ����������� �������������
    comboreproduce(); //������ � ������� �����������, ������ ��� ��������
    setPopulationCount(getPopulationCount() * 0.7) //��������
};

void BySolarEnergy::eat(int season) {
    setEnergy(season * getPopulationCount() * getOneMass() / 2)  //���� = 1, ����� = ����� = 2, ���� = 3 ������ ��������� �������
};

