#ifndef TRUCKCLASS_H_
#define TRUCKCLASS_H_

#include "vehicleModularity.h"

class Truck: public Vehicle { 
	protected:
	double hitchDiameter;
	double towCapacity; 

	public:
	double getHitchDiameter();
	double setHitchDiameter(double);
	double getTowCapacity();
	double setTowCapacity(double);
};

double Truck::getHitchDiameter() { 
	return hitchDiameter; 
}

double Truck::setHitchDiameter(double diameter) { 
	hitchDiameter = diameter; 
	return hitchDiameter;
} 

double Truck::getTowCapacity() { 
	return towCapacity; 
} 

double Truck::setTowCapacity(double capacity) {
	towCapacity = capacity; 
	return towCapacity;
}
#endif
