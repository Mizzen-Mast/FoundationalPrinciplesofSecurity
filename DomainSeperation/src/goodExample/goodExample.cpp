//this is a good example of Domain seperation

#include <iostream>
#include <fstream>
#include <string> 

//Writes a value passed to the function to a file
//Doesn't append that value instead overwrites file
void writeToFile(std::string toBeWritten)
{	
	std::ofstream myfile ("GoodExample.txt");
	if (myfile.is_open())
	{
		myfile << "Writing to a file\n"; 
		myfile << toBeWritten;
		myfile.close(); 
	}
	else std::cout << "Couldn't open file";
}
//calculates the sum of 2 operands
double sum(double operand1, double operand2)
{
	return operand1 + operand2; 
}
int main()
{
	writeToFile("6");
	writeToFile(std::to_string(sum(1,4)));
}
