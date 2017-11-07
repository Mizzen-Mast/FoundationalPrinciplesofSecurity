#include <fstream>

int main() { 
	std::ofstream file ("good.txt");
	if (file.is_open()) {
		file << "writing. \n";
		file << "writing. \n";
		file.close(); 
	} 
	else printf("Failed to open file"); 
	return 0; 
}
