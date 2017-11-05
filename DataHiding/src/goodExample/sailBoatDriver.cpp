#include "sailBoat.h"
#include <iostream>
int main() { 
	
	SailBoat delios;
	double travelTime; 
	
	delios.setWindSpeed(20.0);
	std::cout << "How long would you like to travel: ";
	std::cin >> travelTime; 
	delios.sailTheBoat(travelTime);

	std::cout << std::endl << "The boat is now at position: " << delios.getPosition() << std::endl; 
	return 0; 
}
