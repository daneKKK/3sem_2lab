#include <string>

class Population {
private:
    int populationCount;
    float energy;
    float const massOfOneObject;
    std::string const name;
public:
    Population(int populationCount, float massOfOneObject, float energy, std::string name);
    int getPopulationCount();
    void setPopulationCount(float mass);
    float getEnergy();
    void setEnergy(float energy);
    float getOneMass();
    std::string getName();
    virtual bool checkReproductiveAbility();
    virtual void reproduce();
    virtual bool checkDeath();
    virtual void kill();
    virtual void eat();
}
