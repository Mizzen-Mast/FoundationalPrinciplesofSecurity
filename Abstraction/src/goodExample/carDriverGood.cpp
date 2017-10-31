#include "carGood.h"
#include <iostream>

int main()
{
	Car VWBus(0,"TyeDie");
	std::cout << "The Color of the vehicle is "<< VWBus.getColor() << std::endl;
	std::cout << "The vehicle is located at position " << VWBus.getPosition() << std::endl;
	std::cout << "The TyeDye Mobile moved and is now located at: " << VWBus.drive(6.00) << std::endl;
}
