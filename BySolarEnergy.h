#include "Bacterias.h"

class BySolarEnergy: public Bacterias {
public:
    bool checkReproductiveAbility();
    void reproduce();

    //void changePopulation();
    void eat(int season);

}
