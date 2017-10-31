#include <iostream> 
#include <string>


bool initialLogin(std::string &username, std::string &password, bool &isUser) {
	if (!username.compare("user") && !password.compare("test")){
		password = "";
		username = "";
		isUser = true;
		return true; 
	}
	else { 
		password = "";
		username = ""; 
		return false; 
	}

	return false; 

}

bool adminLogin(std::string &username, std::string &password, bool &isAdmin) { 
	if (!username.compare("admin") && !password.compare("fail")){
		password = "";
		username = "";
		isAdmin = true;
		return true; 
	}
	else { 
		password = "";
		username = ""; 
		return false; 
	}

	return false; 


}
int main() { 
	bool isUser = false, isAdmin = false; 
	std::string password = "", username = ""; 
	std::cout << "Welcome, please enter username to progress: ";
	std::cin >> username;
	std::cout << std::endl<<"Password: ";
	std::cin >> password; 

	while(!initialLogin(username, password, isUser))
	{ 
		std::cout << "Invalid, please enter username to progress: ";
		std::cin >> username;
		std::cout << std::endl << "Password: ";
		std::cin >> password; 
	}
	std::cout << "Please enter admin username to progress: ";
	std::cin >> username;
	std::cout << std::endl << "Password: ";
	std::cin >> password; 


	while(isUser && !adminLogin(username, password, isAdmin)) 
	{
		std::cout << "Invalid, please enter admin username to progress: ";
		std::cin >> username;
		std::cout << std::endl<<"Password: ";
		std::cin >> password; 
	}
	
	if ( isAdmin && isUser )
		std::cout << "You can now do admin things";
	return 1; 	
}
