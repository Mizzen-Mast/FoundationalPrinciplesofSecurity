Layering
--------
Layering is a layering of systems so each has to be beaten in order to fully compromise a system. This can be implemented in a variety of ways and applied in booth a physical sense as well as virtual. 

Good Example: Justification
---------------------------
This example of shows the layering principle. Since one must first login in as a user then login as an admin, multiple mechanisms must be defeated for someone to fully compromise a system. 
```c++ 
	while(isUser && !adminLogin(username, password, isAdmin)) 
	{
		std::cout << "Invalid, please enter admin username to progress: ";
		std::cin >> username;
		std::cout << std::endl<<"Password: ";
		std::cin >> password; 
	}
	
	if ( isAdmin && isUser )
		std::cout << "You can now do admin things";

```
Bad Example: Justification 
--------------------------
This example isn't a good display of the layering. One only has to beat the intial login system in order to fully compromise the system. 
```c++ 
	while(!(initialLogin(username, password, isUser) || adminLogin(username, password, isAdmin)))
	{	
		username = "";
		password = ""; 
		std::cout << "Invalid, please enter username to progress: ";
		std::cin >> username;
		std::cout << std::endl << "Password: ";
		std::cin >> password; 
	}
	
	if ( isAdmin )
		std::cout << "You can now do admin things";
	return 1; 
```
Picture: Justificaiton
-------------------------
This picture is a perfect example of layering of security. One must first gain access to the building, then pass through the man trap. This is then followed by another credential check in order to access the first server room, second server room, or desktop machines, but not all three at the same time. Image was retrieved from [CSoonOnline](https://www.csoononline.com)
![Layering](/Pictures/layering.jpg)
