#**Domain Seperation**

Domain Seperation in the broad sense is the seperation of distinct units into seperate locals. For example, departments in enterprise enviroments. The sales team has a completely different set of needs and requirements than that of the Information Technology Team. As such, they're two completely seperate departments which in this particular instance is domains. In coding, the practice of domain separtion relates very similarly to [Process Isolation](https://github.com/kyle-clayson/FoundationalPrinciplesofSecurity/ProcessIsolation). Domain Seperation basically boils down to this: A program can only access apects of itself and little else. It doesn't get direct access to assets or functions that aren't self contained, ie reading and writing to memory. The program should just say I want to read and write to memory, but the how should be handled by the operating system. The seperate domains in this instance would at a high level, the program and the operating system functions as well as reading and writing. 

#**Good Example: Justification** 
I believe the good example is a correct demostration of domain seperation because it seperates out various aspects of the program into seperate domains. The writing to a a file is done in a seperate function(read domain) than the calculations. This leaves the calculations to run within their own domain and the file writing to occur within in its own domain. 
#**Bad Example: Justification**

#**Picture: Justification**
