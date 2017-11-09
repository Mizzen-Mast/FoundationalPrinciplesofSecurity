Modularity
----------
Modularity is the creation of software in modules. This is in distinct re-useble units. This allows for parts to be easily added or removed without a complete overhaul of the code. There might be some minor modifications but most of the code already written will be untouched. The best example of this is a desktop computer. Most parts are interchangable and easily at that. 

Good Example: Justification
---------------------------
The jusitification for this being a good example of modularity is as follows. These classes are built in sections. There is a base class, vehicleModularity.h, which is built off of by the truckClass.h and carClass.h. This allows one to easily add and remove pieces of each class without affecting the overall code base unless that is the intention and then that is also easy to do. 
```c++
	protected:
	std::string model, make, color; 
	double xPosition, yPosition; 
	
	public:
	Vehicle();
	Vehicle(std::string, std::string, std::string, double, double);
	~Vehicle();	
	double getXPosition();
	double setXPosition(double);	
	double getYPosition();
	double setYPosition(double);
	std::string getModel();
    	std::string setModel(std::string);
	std::string getMake();
	std::string setMake(std::string);
	std::string getColor();
	std::string setColor(std::string);	

```
```c++ 
protected:
	double hitchDiameter;
	double towCapacity; 

	public:
	double getHitchDiameter();
	double setHitchDiameter(double);
	double getTowCapacity();
	double setTowCapacity(double);

```
Bad Exmaple: Justification
--------------------------
This is a bad example of modularity. The code is in one solid block and changes to one section has a potential to be reflected throughout even if that isn't intended. 
```c++ 
	std::string model, make, color, vehicleName; 
	double xPosition=0, yPosition=0; 

	std::cout<<"What did you name your vehicle: ";
	std::cin >> vehicleName;

	std::cout<<std::endl<<"What model Vehicle: ";
	std::cin >> model; 
	
	std::cout<<std::endl<<"What make of vehicle: ";
	std::cin >> make; 

	std::cout<<std::endl<<"What color is the vehicle: ";
	std::cin >> color;

```
Picture: Justification
----------------------
This picture is a great example of modularity. The house is built in a series of seperate units and one can remove and add different modules fairly easily. This picture came from: [Modularity](https://www.kratosmsd.com)

![Modularity](/Pictures/modularity.jpg)
