#include "carBad.h"
#include <iostream>

int main()
{
	Car VWBus(0,"TyeDie");
	VWBus.position = 10.000;
	VWBus.color = "Pink";
	std::cout << "The Color of the vehicle is "<< VWBus.color << std::endl;
	std::cout << "The vehicle is located at position " << VWBus.position << std::endl;
	std::cout << "The TyeDye Mobile moved and is now located at: " << VWBus.drive(6.00) << std::endl;
}
