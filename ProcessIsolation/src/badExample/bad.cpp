#include <fstream>

//template<typename stream_type> 
void processOne() {

	std::fstream file ("bad.txt");
	if (file.is_open()) 
	{
		file << "Writing. \n";
		file << "Writing. \n";
	}
} 

//template<typename stream_type> 
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
