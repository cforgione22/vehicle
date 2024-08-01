//Crystal Forgione
//24.SU.CIS.1202.201
//07-28-24

// #include "importLibrary.h"
#include "vehicles.h"

Vehicle::Vehicle() {}
void Vehicle::setManufacturer(string manufac)
{
  manufacturer = manufac;
}

void Vehicle::setYearBuilt(int yBuilt) 
{
  yearBuilt = yBuilt;
}
    
void Vehicle::displayInfo() 
{
  cout << "Vehicle Information:\n";
  cout << "Manufacturer: " << manufacturer << endl;
  cout << "Year Built: " << yearBuilt << endl;
}

