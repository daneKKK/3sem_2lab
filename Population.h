class Population {
private:
    int populationCount;
    float mass;
    float const massOfOneObject = 1.;
public:
    Population(int populationCount);
    int getPopulationCount();
    void setPopulationCount(float mass);
    float getMass();
    void setMass(float mass);
    float getOneMass();
    bool
    virtual checkReproductiveAbility();
}
