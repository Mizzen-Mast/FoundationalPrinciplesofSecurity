//this is a bad example of Domain seperation

#include <iostream>
#include <fstream>
#include <string> 

int main()
{
	std::string toBeWritten;
	int operand1 = 0, operand2 = 6; 
	std::ofstream myfile ("BadExample.txt");
	toBeWritten = std::to_string(operand1 * operand2);
	//write calculation to file
	if (myfile.is_open())
	{
		myfile << "Writing to a file\n"; 
		myfile << toBeWritten;
		myfile.close(); 
	}
	else std::cout << "Couldn't open file";
}
