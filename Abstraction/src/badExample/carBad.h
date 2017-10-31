#ifndef CARBAD_H_
#define CARBAD_H_ 

#include <string> 

class Car
{
public:
	double position; 
	std::string color;
	Car();
	Car(double, std::string);
	~Car();
	double drive(double);
	double getPosition();
	std::string getColor(); 
};

Car::Car() {
	Car::position = 0;
	Car::color = "";
}
Car::Car(double a, std::string b) {
	Car::position = a;
	Car::color = b;
}
Car::~Car() {}

double Car::getPosition() {
	return Car::position;
}

std::string Car::getColor() {
	return Car::color;
}

double Car::drive(double distance) {
	Car::position = position + distance;
	return Car::position; 
}
#endif
