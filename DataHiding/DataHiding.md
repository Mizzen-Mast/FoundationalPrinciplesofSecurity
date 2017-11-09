Data Hiding
-----------
Data hiding is concept in which the user doesn't get access to the data or see it. They get to use mutators, getters and setters, and other functions to manipulate the data, but don't have direct access to it. 

Good Example: Justificaiton
---------------------------
In this example, the data is hidden from the user. Like as described above, they only can access the data through mutators, getters and setters in this instance. The usage of the data is also hidden from the use, atleast the usage by the sailboat class. 
```c++ 
	SailBoat();
        ~SailBoat(); 
	double getMastDiameter();
	double setMastDiameter(double);
```
Bad Example: Justification
--------------------------
This example was used previously, but the user would have direct access to the state of the car, ie it's color. They could manipulate the data exactly as they saw fit, even change varibles names and operations on them.
```c++
	double position = 10.000, travel = 0; 
	std::string color = "Pink";
	std::cout << "The Color of the vehicle is "<< color << std::endl;
	std::cout << "The vehicle is located at position " << position << std::endl;

```
Picture: Justification
----------------------
This picture of a bank vault door being closed is a perfect example of data hiding. One knows there is cash, and various valuables stored in the vault, but not how they are stored and what is actually in there, and access isn't giving to people without permission, or depending on the situation, not giving access at all. This mirrors the principle of data hiding perfectly, one knows there is data there, not exactly what and can only access what the creator intended them to. This image came from [SquareSpace](https://www.squarespace.com)
![DataHiding](/Pictures/DataHiding.jpeg) 
