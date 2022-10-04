#include <iostream>
#include "stdafx.h"
#include <vector>

using std::cout;
using std::endl;
using std::vector;

class Biom {
private :
    int season;
    float temperature;
    float humidity;
    int day;
    int finalDay;
    vector<*Population> inhabitants;

public:
    Biom(int season, float temperature, float humidity, int finalDay): season(season), temperature(temperature), humidity(humidity), finalDay(finalDay) {}

    int getSeason() {
        return season;
    }

    float getTemperature() {
        return temperature;
    }

    float getHumidity() {
        return humidity;
    }

    float detDay() {
        return day;
    }

    void addInhabitant(*Population newInhabitant) {
        inhabitants.push_back(newInhabitant);
    }

    void deleteInhabitant(*Population oldInhabitant) {
        int k = 0;
        for (i = 0, i < size(inhabitants); i++) {
            if ((*inhabitants[i]) == (*oldInhabitant)) {
                k = 1;
                break;
            };
        };
        if (k == 1) {
            inhabitants.erase(i);
            delete inhabitants[i];
        };
        k = 0;
    }

    void status() {
        cout << "_____________________________" << endl;
        cout << "day" << day+1 << endl;
        for (i = 0, i < size(inhabitants), i++)
            cout << (inhabitants[i]->getName()) << " " << (inhabitants[i]->getPopulationCount()) << (inhabitants[i]->getEnergy()) <<endl;
        cout << endl;
    }

    void goSimulation(int finalDay) {
        for (day = 0, day < finalDay, day++) {
            for (i = 0, i < size(inhabitants), i++)
                inhabitants[i]->eat(inhabitants[rand() %  size(inhabitants)], season, temperature, humidity);
            for (i = 0, i < size(inhabitants), i++)
                inhabitants[i]->changePopulation(season, temperature, humidity);
            for (i = 0, i < size(inhabitants), i++) {
                if (inhabitants[i]->checkDeath())
                    deleteInhabitant(inhabitants[i]);
            };
         status();
        };
    }
};



