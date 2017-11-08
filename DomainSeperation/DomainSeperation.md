Domain Seperation
-----------------
Domain Seperation in the broad sense is the seperation of distinct units into seperate locals. For example, departments in enterprise enviroments. The sales team has a completely different set of needs and requirements than that of the Information Technology Team. As such, they're two completely seperate departments which in this particular instance is domains. In coding, the practice of domain separtion relates very similarly to Process Isolation. Domain Seperation basically boils down to this: A program can only access apects of itself and little else. It doesn't get direct access to assets or functions that aren't self contained, ie reading and writing to memory. The program should just say I want to read and write to memory, but the how should be handled by the operating system. The seperate domains in this instance would at a high level, the program and the operating system functions as well as reading and writing. 

Good Example: Justification
--------------------------- 
I believe the good example is a correct demostration of domain seperation because it seperates out various aspects of the program into seperate domains. The writing to a a file is done in a seperate function(read domain) than the calculations. This leaves the calculations to run within their own domain and the file writing to occur within in its own domain. 
```c++ 
	writeToFile("6");
	writeToFile(std::to_string(sum(1,4)));

```
Bad Example: Justification
-------------------------
The bad example is just of opposite of the good example. Every action is done in main, initialization of variables, calculation of production, and the writing to a file. This is a intersection of seperate domains that should be kept seperate. Also it makes the code harder to maintain and harder to read. 
```c++ 
	toBeWritten = std::to_string(operand1 * operand2);
	if (myfile.is_open())
	{
		myfile << "Writing to a file\n"; 
		myfile << toBeWritten;
		myfile.close(); 
	}
```
Picture: Justification
----------------------
This picture is perfect representation of domain seperation. What your looking at  is a saltwater refugium. If you look at this particular picture there are 4 seperate domains. The first domain, is where water enters the sump from the tank above. This domain is sperated by a series of baffles from the area of man made filtration. This area houses the protein skimmer which uses mechanical filtration to achieve it's goal. The 3rd area is seperated from the second again by baffles. The third domain is microbiological filtration through use of live rock. The fourth domain again is seperated from the third once again by baffles. This area is the return for the water in the main tank. There is also a fifth domain that interupts the return flow and runs as chemical filtration. This then returns water to the mechanical filtration. 
![DomainSeperation](/Pictures/domainSeperation.jpg)
