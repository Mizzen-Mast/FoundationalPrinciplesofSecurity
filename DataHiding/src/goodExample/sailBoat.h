#ifndef SAILBOAT_H_
#define SAILBOAT_H_

#include <string>

class SailBoat 
{
	double mastDiameter, mastLength, jibLength, boomLength, mainSailSize, backStaySize, keelWeight, windSpeed, position; 
	std::string mainSailDesignPattern, jibDesignPattern; 
public: 
	SailBoat();
       ~SailBoat(); 
	double getMastDiameter();
 	double getMastLength();
	double getJibLength();
	double getBoomLength();
	double getMainSailSize();
	double getBackStaySize();
	double getKeelWeight();
	double getWindSpeed();
       	double getPosition(); 	
	std::string getMainSailDesignPattern();	
	std::string getJibDesignPattern();

	double setMastDiameter(double);
	double setMastLength(double);
	double setJibLength(double);
	double setBoomLength(double);
	double setMainSailSize(double);
	double setBackStaySize(double);
	double setKeelWeight(double);
	double setWindSpeed(double);
        double setPosition(double); 	
	std::string setMainSailDesignPattern(std::string);
	std::string setJibDesignPattern(std::string);

	void sailTheBoat(double); 
};

#endif
