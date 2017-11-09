#include <iostream>

int main() { 

	int a = 1048576, count = 0; 

	while (a > 4) {	
	a/=2; 
	if ( ( count % 2 ) == 1 )
		std::cout << "The value of a after being divided by 4 is: " << a << std::endl;	
	count+=1;
	}
}
