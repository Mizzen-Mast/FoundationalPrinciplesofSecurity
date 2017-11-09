#include <sys/types.h>
#include <unistd.h>
#include <iostream>


void getInitialPermission() { 
	if (setuid(0))
		perror("setuid");
}

void setPermission(int uid) {
	if (setuid(uid)) 
		perror("setuid");
}


int main ()
{
	int intialUID = getuid(); 
	std::cout << "My UID current is: "<< intialUID << " My GID is: " << getgid() << std::endl;
	std::cout << "I've attempted to get root access." << std::endl;
	getInitialPermission(); 
	if ( getuid() == 0 )
		std::cout << "I've got root. UID: " << getuid() << " GID: " << getgid() << std::endl; 
	else 
		std::cout << "I didn't get root. :(" <<std::endl;
	std::cout << "Doing stuff that doesn't require any sort of permissions."<<std::endl; 
}
