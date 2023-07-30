#include "Plant.h"

Plant::Plant()
{

	name = "Default plant";
	classType = 0; 

}

Plant::Plant(string n)

{

	name = n; 

}

void Plant::setName(string n)
{

	name = n;

}