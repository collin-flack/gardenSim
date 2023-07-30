#include "Plant.h"
#include "Habanero.h"

int main()
{

    Plant plant1("static type object plant");


    Plant * plant2 = new Plant("dynamic type object plant");
  
    plant1.sayName();

    plant2->sayName();

// COPY CONSTRUCTOR:

    Plant plant3 = plant1; 
    Plant plant4(plant1); // (two different ways of copy constructor for static type)
    Plant* plant5 = new Plant(*plant2); // (one way of copy const. for dynamic type) 


    Habanero * hab1 = new Habanero(); 
    hab1->setName("Habanero 1"); 
    hab1->sayName(); 

    plant2->plantGrow(); 
    hab1->plantGrow(); 
    delete plant2;



    return 0;
}