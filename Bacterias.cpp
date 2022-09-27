#include "Bacterias.h"

void Bacterias::comboreproduce() {
    this->setPopulationCount(this->getPopulationCount() * 2);
}

bool Bacterias::checkDeath() {
    return (getPopulationCount() <= 0);
}
