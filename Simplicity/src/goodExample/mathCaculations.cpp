#include <iostream>

int main() {

	int a = 1048576; 

	while (a > 4) {
		a/=4;

	std::cout << "The value of a after being divided by four is: " << a << std::endl;
	}	
}
