#include <string>

class Population {
private:
    int populationCount;
    float mass;
    float const massOfOneObject;
    std::string const name;
public:
    Population(int populationCount, float mass, float massOfOneObject);
    int getPopulationCount();
    void setPopulationCount(float mass);
    float getMass();
    void setMass(float mass);
    float getOneMass();
    std::string getName();
    virtual bool checkReproductiveAbility();
    virtual void reproduce();
    virtual bool checkDeath();
    virtual void eat();
}
