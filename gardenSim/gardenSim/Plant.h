#include <string>
#include <iostream>

using namespace std;

#pragma once
class Plant

{

private:

	string name; 

protected:

	int classType; 


public:

	Plant();

	Plant(string id);

	void sayName() {

		cout << "My name is " + name << endl;

	}

	void setName(string n);

	virtual void plantGrow() {

		cout << "Plant is growing" << endl; 

	}

};