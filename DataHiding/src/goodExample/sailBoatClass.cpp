#include "sailBoat.h"

SailBoat::SailBoat() { 
	SailBoat::mastDiameter = 0; 
	SailBoat::mastLength = 0; 
	SailBoat::jibLength = 0; 
	SailBoat::boomLength = 0; 
	SailBoat::mainSailSize = 0;
	SailBoat::backStaySize = 0; 
	SailBoat::keelWeight = 0; 
	SailBoat::windSpeed = 0; 
	SailBoat::mainSailDesignPattern = "Juliaset Fractal";
	SailBoat::jibDesignPattern = "MandelBrot Fractal";
	SailBoat::position = 0; 
}

SailBoat::~SailBoat(){};

double SailBoat::getMastDiameter() {
	return mastDiameter; 
}

double SailBoat::getMastLength() {
	return mastLength; 
}

double SailBoat::getJibLength() {
	return jibLength; 
}

double SailBoat::getMainSailSize() {
	return mainSailSize; 
}

double SailBoat::getBackStaySize() { 
	return backStaySize;
}

double SailBoat::getKeelWeight() { 
	return keelWeight; 
}

double SailBoat::getWindSpeed() { 
	return windSpeed; 
}

double SailBoat::getPosition() { 
	return position; 
}

std::string SailBoat::getMainSailDesignPattern() { 
	return mainSailDesignPattern; 
}

std::string SailBoat::getJibDesignPattern() { 
	return jibDesignPattern; 
}

//setters 
double SailBoat::setMastDiameter(double setValue) {
	mastDiameter=setValue;
	return mastDiameter; 
}

double SailBoat::setMastLength(double setValue) {
	mastLength=setValue;
	return mastLength; 
}

double SailBoat::setJibLength(double setValue) {
	jibLength=setValue;
	return jibLength; 
}

double SailBoat::setMainSailSize(double setValue) {
	mainSailSize=setValue;
	return mainSailSize; 
}

double SailBoat::setBackStaySize(double setValue) {
	backStaySize=setValue; 
	return backStaySize;
}

double SailBoat::setKeelWeight(double setValue) {
	keelWeight=setValue; 
	return keelWeight; 
}

double SailBoat::setWindSpeed(double setValue) {
	windSpeed=setValue; 
	return keelWeight; 
}

double SailBoat::setPosition(double setValue) {
	position=setValue; 
	return position; 
}

std::string SailBoat::setMainSailDesignPattern(std::string setValue) {
	mainSailDesignPattern=setValue; 
	return mainSailDesignPattern; 
}

std::string SailBoat::setJibDesignPattern(std::string setValue) {
	jibDesignPattern=setValue; 
	return jibDesignPattern; 
}

void SailBoat::sailTheBoat(double time){ 

	double previousPosition = position; 

	position = previousPosition + (windSpeed * time); 
}
