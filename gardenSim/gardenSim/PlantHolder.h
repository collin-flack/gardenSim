#pragma once
#include <string>
using namespace std; 
#include <vector>
#include "Plant.cpp"

class PlantHolder

{

private:

	string owner; 
	vector<Plant> holder; 

public: 

	PlantHolder(Plant firstPlant); 

	void printPlants(); 




};