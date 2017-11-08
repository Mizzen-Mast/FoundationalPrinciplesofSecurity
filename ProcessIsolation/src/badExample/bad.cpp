#include <fstream>

void processOne() {

	std::fstream file ("bad.txt");
	if (file.is_open()) 
	{
		file << "Writing. \n";
		file << "Writing. \n";
	}
} 

void processTwo() {

	std::fstream file ("bad.txt");
	if (file.is_open())
	{
		file << "Writing. \n";
		file << "Writing. \n";
	}
}

int main() { 

	processOne();
	processTwo();
}
