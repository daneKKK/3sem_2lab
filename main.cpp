#include <iostream>
#include "Population.h"
#include "Plants.h"
#include "Bacterias.h"
#include "BySolarEnergy.h"
#include "CarnivoresBacterias.h"
#include "FloweringPlants.h"
#include "GymnospermPlants.h"

using namespace std;

int main()
{

    FloweringPlants flower(100, 10, 1000, "Rose");
    GymnospermPlants elka(10, 15, 1000, "Elka");
    CarnivoresBacterias infuzoria_zlaya(1000, 1, 1000, "Infuzoria_zlaya");
    BySolarEnergy infuzoria_good(1000, 1, 1000, "Infuzoria_good");
    flower.eat(nullptr);
    elka.eat(nullptr);
    for (int i = 0; i < 50; i++) {
    infuzoria_zlaya.eat(&infuzoria_good);
    infuzoria_good.eat(nullptr);
    std::cout << std::endl;
    std::cout << "day" << i+1 << std::endl;
    std::cout << "===========energy=============" << std::endl;
    std::cout << flower.getEnergy() << std::endl;
    std::cout << elka.getEnergy() << std::endl;
    std::cout << infuzoria_good.getEnergy() << std::endl;
    std::cout << infuzoria_zlaya.getEnergy() << std::endl;
    flower.changePopulation();
    elka.changePopulation();
    infuzoria_good.changePopulation();
    infuzoria_zlaya.changePopulation();
    std::cout << "======population===============" << std::endl;
    std::cout << flower.getPopulationCount() << std::endl;
    std::cout << elka.getPopulationCount() << std::endl;
    std::cout << infuzoria_good.getPopulationCount() << std::endl;
    std::cout << infuzoria_zlaya.getPopulationCount() << std::endl;
    std::cout << "end of day" << std::endl;
    }
    return 0;
}
