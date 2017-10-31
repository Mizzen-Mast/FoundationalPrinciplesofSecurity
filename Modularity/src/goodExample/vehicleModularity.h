#ifndef VEHICLEMODULARITY_H_
#define	VEHILCEMODULATIRY_H_

#include <string> 
class Vehicle {
	
	protected:
	std::string model, make, color; 
	double xPosition, yPosition; 
	
	public:
	Vehicle();
	Vehicle(std::string, std::string, std::string, double, double);
	~Vehicle();	
	double getXPosition();
	double setXPosition(double);	
	double getYPosition();
	double setYPosition(double);
	std::string getModel();
    	std::string setModel(std::string);
	std::string getMake();
	std::string setMake(std::string);
	std::string getColor();
	std::string setColor(std::string);	
};

Vehicle::Vehicle() { 
	model = "";
	make = "";
	color = "Blue";
	xPosition = 0;
	yPosition = 0; 
}

Vehicle::Vehicle(std::string modelPassed, std::string makePassed, std::string colorPassed, double xPositionPassed, double yPositionPassed) { 
	model = modelPassed;
	make = makePassed;
	color = colorPassed;
	xPosition = xPositionPassed; 
	yPosition = yPositionPassed; 
}

Vehicle::~Vehicle() {}

double Vehicle::getXPosition() {
	return xPosition; 
}

double Vehicle::setXPosition(double xPassed) {
	xPosition = xPassed; 
	return xPosition; 
}

double Vehicle::getYPosition() { 
	return yPosition;
}

double Vehicle::setYPosition(double yPassed) { 
	yPosition = yPassed;
	return yPosition;
}

std::string Vehicle::getModel() {
	return model; 
}

std::string Vehicle::setModel(std::string modelPassed) {
	model = modelPassed;
	return model;
}

std::string Vehicle::getMake() { 
	return make; 
}

std::string Vehicle::setMake(std::string makePassed) { 
	make = makePassed;
	return make; 
}

std::string Vehicle::getColor() {
	return make;
} 

std::string Vehicle::setColor(std::string colorPassed) {
	color = colorPassed;
	return color; 
}
#endif
