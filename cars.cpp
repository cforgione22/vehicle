//Crystal Forgione
//24.SU.CIS.1202.201
//07-28-24

// #include "importLibrary.h"
#include "cars.h"

Car::Car() {}
void Car::setNumberOfDoors(int numDoors)
{
  numberOfDoors = numDoors;
}

void Car::displayInfo()// calling the base function Vehicle
{
  Vehicle::displayInfo();
  cout << "Doors: " << numberOfDoors << endl;
}