#ifndef CARCLASS_H_
#define CARCLASS_H_

#include "vehicleModularity.h"

class Car: public Vehicle { 

	protected: 
	double numCupHolders;
	std::string tractionControlSystem; 

	public: 
	double getNumCupHolders();
	double setNumCupHolders(double);
	std::string getTractionControlSystem();
	std::string setTractionControlSystem(std::string);

};

double Car::getNumCupHolders() { 
	return numCupHolders; 
}

double Car::setNumCupHolders(double amount) { 
	numCupHolders = amount;
	return numCupHolders;
}

std::string Car::getTractionControlSystem() { 
	return tractionControlSystem;
}

std::string Car::setTractionControlSystem(std::string traction) { 
	tractionControlSystem = traction;
	return tractionControlSystem;
}

#endif
