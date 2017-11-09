all: abstractionGood abstractionBad \
dataHidingGood dataHidingBad \
domainSeperationGood domainSeperationBad \
layeringGood layeringBad \
leastPrivilegeGood leastPrivilegeBad \
minimizationGood minimizationBad \
modularityBad \
processIsolationGood processIsolationBad \
resourceEncapsulationGood resourceEncapsulationBad \
simplicityGood simplicityBad 

abstractionGood: ./Abstraction/src/goodExample/carDriverGood.cpp
	g++ -o ./Abstraction/src/goodExample/goodRun ./Abstraction/src/goodExample/carDriverGood.cpp ./Abstraction/src/goodExample/carGood.h

abstractionBad: ./Abstraction/src/badExample/carDriverBad.cpp
	g++ -o ./Abstraction/src/badExample/badRun ./Abstraction/src/badExample/carDriverBad.cpp 

dataHidingGood: ./DataHiding/src/goodExample/sailBoatDriver.cpp
	g++ -o ./DataHiding/src/goodExample/goodRun ./DataHiding/src/goodExample/sailBoatClass.cpp ./DataHiding/src/goodExample/sailBoatDriver.cpp ./DataHiding/src/goodExample/sailBoat.h

dataHidingBad: ./DataHiding/src/badExample/carDriverBad.cpp
	g++ -o ./DataHiding/src/badExample/badRun ./DataHiding/src/badExample/carDriverBad.cpp 

domainSeperationGood: ./DomainSeperation/src/goodExample/goodExample.cpp
	g++ -o ./DomainSeperation/src/goodExample/goodRun ./DomainSeperation/src/goodExample/goodExample.cpp

domainSeperationBad: ./DomainSeperation/src/badExample/badExample.cpp
	g++ -o ./DomainSeperation/src/badExample/badRun ./DomainSeperation/src/badExample/badExample.cpp

layeringGood: ./Layering/src/goodExample/authenticationSystem.cpp
	g++ -o ./Layering/src/goodExample/goodRun ./Layering/src/goodExample/authenticationSystem.cpp

layeringBad: ./Layering/src/badExample/badAuthenticationSystem.cpp
	g++ -o ./Layering/src/badExample/badRun ./Layering/src/badExample/badAuthenticationSystem.cpp

leastPrivilegeGood: ./LeastPrivilege/src/goodExample/rootRequestGood.cpp
	g++ -o ./LeastPrivilege/src/goodExample/goodRun ./LeastPrivilege/src/goodExample/rootRequestGood.cpp

leastPrivilegeBad: ./LeastPrivilege/src/badExample/rootRequestBad.cpp
	g++ -o ./LeastPrivilege/src/badExample/badRun ./LeastPrivilege/src/badExample/rootRequestBad.cpp

minimizationGood: ./Minimization/src/goodExample/good.c
	g++ -o ./Minimization/src/goodExample/goodRun ./Minimization/src/goodExample/good.c

minimizationBad: ./Minimization/src/badExample/bad.c
	g++ -o ./Minimization/src/badExample/badRun ./Minimization/src/badExample/bad.c

modularityBad: ./Modularity/src/badExample/bad.cpp
	g++ -o ./Modularity/src/badExample/badRun ./Modularity/src/badExample/bad.cpp

processIsolationGood: ./ProcessIsolation/src/goodExample/good.cpp
	g++ -o ./ProcessIsolation/src/goodExample/goodRun ./ProcessIsolation/src/goodExample/good.cpp

processIsolationBad: ./ProcessIsolation/src/badExample/bad.cpp
	g++ -o ./ProcessIsolation/src/badExample/badRun ./ProcessIsolation/src/badExample/bad.cpp

resourceEncapsulationGood: ./ResourceEncapsulation/src/goodExample/CarDriverGood.cpp
	g++ -o ./ResourceEncapsulation/src/goodExample/goodRun ./ResourceEncapsulation/src/goodExample/CarDriverGood.cpp ./ResourceEncapsulation/src/goodExample/carGood.h

resourceEncapsulationBad: ./ResourceEncapsulation/src/badExample/carDriverBad.cpp
	g++ -o ./ResourceEncapsulation/src/badExample/badRun ./ResourceEncapsulation/src/badExample/carDriverBad.cpp ./ResourceEncapsulation/src/badExample/carBad.h

simplicityGood: ./Simplicity/src/goodExample/mathCalculations.cpp
	g++ -o ./Simplicity/src/goodExample/goodRun ./Simplicity/src/goodExample/mathCalculations.cpp

simplicityBad: ./Simplicity/src/badExample/mathCalculationsBad.cpp
	g++ -o ./Simplicity/src/badExample/badRun ./Simplicity/src/badExample/mathCalculationsBad.cpp



clean: 
	rm -r ./*/*/*/*Run
