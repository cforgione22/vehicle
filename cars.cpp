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

void Car::displayInfo(int numDoors)// calling the base function Vehicle
{
  cout << "Doors: " << numDoors << endl;
}