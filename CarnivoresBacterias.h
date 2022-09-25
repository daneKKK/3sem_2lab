#include "Bacterias.h"

class CarnivoresBacterias: public Bacterias {
public:
    bool checkReproductiveAbility();
    void reproduce();

    //void changePopulation();
    void eat(::Population prey);
}
