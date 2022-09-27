#include "Plants.h"

bool Plants::checkDeath() {
    return (getPopulationCount() < 0);
}
