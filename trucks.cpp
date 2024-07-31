//Crystal Forgione
//24.SU.CIS.1202.201
//07-28-24

// #include "importLibrary.h"
#include "trucks.h"


Truck::Truck() {}
void Truck::setTowingCapacity(int towCap)
{
  towingCapacity = towCap;
}

int Truck::getTowingCapacity(int towcap)  
{
  return towcap;
}

void Truck::displayInfo(int towCap)// calling the base function Vehicle
{
  cout << "Towing capacity: " << towCap << endl;
}