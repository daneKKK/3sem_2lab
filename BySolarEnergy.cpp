#include "BySolarEnergy.h"

bool checkReproductiveAbility() {
    return true;
};

void reproduce() {
    setPopulationCount(getEnergy() / getOneMass()); //сколько осталось после кормежки + могли размножится дополнительно
    comboreproduce(); //бахают в большое размножение, потому что бактерии
    setPopulationCount(getPopulationCount() * 0.7) //старение
};

void BySolarEnergy::eat(int season) {
    setEnergy(season * getPopulationCount() * getOneMass() / 2)  //зима = 1, весна = осень = 2, лето = 3 кушают солнечную энергию
};

