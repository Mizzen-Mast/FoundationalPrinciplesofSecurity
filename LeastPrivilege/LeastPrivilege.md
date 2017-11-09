Least Privilage
---------------
Least privilage is giving the object the least amount of privilege to do the job. For example, if I edit a file using vim, its run with privileges that allow it to edit that file but not a file that would be say in the etc directory. 

Good Example: Justification
---------------------------
THis set of code represents the principle of least privilege. It requests the root privilege. It then releases root privilege and does the activites it needs to that don't require root privilege. If it needed root privilege to do anything it would then set privilege again to rootbe able to request root privilege again. As a side note one must set the owner of the executable file to root and set the file to be run by as the owner of the file. 
```c++
	getInitialPermission(); 
	if ( getuid() == 0 )
		std::cout << "I've got root. UID: " << getuid() << " GID: " << getgid() << std::endl; 
	else 
		std::cout << "I didn't get root. :(" <<std::endl;
	setPermission(intialUID); 	
	std::cout << "I've reliquished my permissions UID: " << getuid() << " GID: " << getgid() << std::endl; 

```
Bad Example: Justification
--------------------------
This code is a bad example of least privilege. It requests root privilege and then holds on to it through the duration of it's operation instead of reliquishing and then requesting it again once it's need. As a side note one must set the owner of the executable file to root and set the file to be run by as the owner of the file. 
```c++
	getInitialPermission(); 
	if ( getuid() == 0 )
		std::cout << "I've got root. UID: " << getuid() << " GID: " << getgid() << std::endl; 
	else 
		std::cout << "I didn't get root. :(" <<std::endl;
	std::cout << "Doing stuff that doesn't require any sort of permissions."<<std::endl; 
```
Picture: Justification
----------------------
The picture represented here is a blue print of a jail. This while a bit dark is a great example of least privilege. Those who are incarcerated have absolutly no privilege to access anything except when allowed to, where it be their cell, common area, or library. This image comes from: [PinsDaddy](https://www.pinsdaddy.com) 

![Least Privilage](/Pictures/leastPrivilege.jpg) 
