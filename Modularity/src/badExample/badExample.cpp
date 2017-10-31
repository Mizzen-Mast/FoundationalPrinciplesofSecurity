#include <string>
#include <iostream>

int main() { 
	std::string model, make, color, vehicleName; 
	double xPosition=0, yPosition=0; 

	std::cout<<"What did you name your vehicle: ";
	std::cin >> vehicleName;

	std::cout<<std::endl<<"What model Vehicle: ";
	std::cin >> model; 
	
	std::cout<<std::endl<<"What make of vehicle: ";
	std::cin >> make; 

	std::cout<<std::endl<<"What color is the vehicle: ";
	std::cin >> color;
}

