mkdir temp
g++ main.cpp -E -o ./temp/main_prof.cpp
g++ Population.cpp -E -o ./temp/Population_prof.cpp
g++ Plants.cpp -E -o ./temp/Plants_prof.cpp
g++ FloweringPlants.cpp -E -o ./temp/FloweringPlants_prof.cpp
g++ GymnospermPlants.cpp -E -o ./temp/GymnospermPlants_prof.cpp
g++ Bacterias.cpp -E -o ./temp/Bacterias_prof.cpp
g++ CarnivoresBacterias.cpp -E -o ./temp/CarnivoresBacterias_prof.cpp
g++ BySolarEnergy.cpp -E -o ./temp/BySolarEnergy_prof.cpp
g++ ./temp/main_prof.cpp -c -o ./temp/main.o
g++ ./temp/Population_prof.cpp -c -o ./temp/Population.o
g++ ./temp/Plants_prof.cpp -c -o ./temp/Plants.o
g++ ./temp/FloweringPlants_prof.cpp -c -o ./temp/FloweringPlants.o
g++ ./temp/GymnospermPlants_prof.cpp -c -o ./temp/GymnospermPlants.o
g++ ./temp/Bacterias_prof.cpp -c -o ./temp/Bacterias.o
g++ ./temp/CarnivoresBacterias_prof.cpp -c -o ./temp/CarnivoresBacterias.o
g++ ./temp/BySolarEnergy_prof.cpp -c -o ./temp/BySolarEnergy.o
g++ ./temp/main.o ./temp/Population.o ./temp/Plants.o ./temp/FloweringPlants.o ./temp/GymnospermPlants.o ./temp/Bacterias.o ./temp/CarnivoresBacterias.o ./temp/BySolarEnergy.o -o main
