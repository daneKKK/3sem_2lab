g++ main.cpp -E -o main_prof.cpp
g++ Population.cpp -E -o Population_prof.cpp
g++ Plants.cpp -E -o Plants_prof.cpp
g++ FloweringPlants.cpp -E -o FloweringPlants_prof.cpp
g++ GymnospermPlants.cpp -E -o GymnospermPlants_prof.cpp
g++ Bacterias.cpp -E -o Bacterias_prof.cpp
g++ CarnivoresBacterias.cpp -E -o CarnivoresBacterias_prof.cpp
g++ BySolarEnergy.cpp -E -o BySolarEnergy_prof.cpp
g++ main_prof.cpp -c -o main.o
g++ Population_prof.cpp -c -o Population.o
g++ Plants_prof.cpp -c -o Plants.o
g++ FloweringPlants_prof.cpp -c -o FloweringPlants.o
g++ GymnospermPlants_prof.cpp -c -o GymnospermPlants.o
g++ Bacterias_prof.cpp -c -o Bacterias.o
g++ CarnivoresBacterias_prof.cpp -c -o CarnivoresBacterias.o
g++ BySolarEnergy_prof.cpp -c -o BySolarEnergy.o
g++ main.o Population.o Plants.o FloweringPlants.o GymnospermPlants.o Bacterias.o CarnivoresBacterias.o BySolarEnergy.o -o main
main