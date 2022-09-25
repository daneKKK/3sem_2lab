#include "Bacterias.h"

void comboreproduce() {
    setPopulationCount(getPopulationCount() * 2);
}

bool Bacterias::checkDeath() {
    return (getPopulationCount() <= 0);
}
