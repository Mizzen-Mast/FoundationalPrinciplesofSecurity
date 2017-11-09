Abstraction
-----------
Abstraction is the taking of some process and hiding the details of it, or moving up a layer in the the through process. FOr exmaple, if I were to talk to how a sump in an saltwater aquarium were to work, that would be the detail. Instead, I would just mention I used a sump in my reef tank and that it was a means of filteration, that would be abstracting the concept of a sump. 

Good Example: Justification
---------------------------
This is a good exmaple of abstraction. As you can see the carDriverClass just calls drive and passes how far the vehicle will go. The programmer whom is working with the car class doesn't have to deal with the details of driving, just that it can be done.  
```c++
std::cout << "The TyeDye Mobile moved and is now located at: " << VWBus.drive(6.00) << std::endl;
```

Bad Example: Justification
---------------------------
This is a bad example for the exact opposite reasons that made the previous example. In this code, the programer has to deal with the exact details of a driving instead of just saying drive this far. 
```c++ 
void drive(double travel, double &initPosition) { 
	initPosition = travel + initPosition;
}
```
Picture: Justification
----------------------
A gas and brake pedal on a vehicle are a great example of abstraction. The driver isn't concerned with how the acceleration or braking happens, just that it does. This is removing the details of each action, abstracting, and just giving the driver the basic concept to deal with. The picture was retrieved from [Ali Express](https://www.aliexpress.com) 

![Abstraction Example](/Pictures/abstraction.jpg)
