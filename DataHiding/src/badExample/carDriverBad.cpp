#include <iostream>
#include <string>

void drive(double travel, double &initPosition) { 
	initPosition = travel + initPosition; 
		
}

int main()
{
	double position = 10.000, travel = 0; 
	std::string color = "Pink";
	std::cout << "The Color of the vehicle is "<< color << std::endl;
	std::cout << "The vehicle is located at position " << position << std::endl;
	std::cout << "How far would like to drive: ";
	std::cin >> travel; 
	drive(travel, position); 
	std::cout << "The TyeDye Mobile moved and is now located at: " << position<< std::endl;
}
