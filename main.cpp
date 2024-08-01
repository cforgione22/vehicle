//Crystal Forgione
//24.SU.CIS.1202.201
//07-28-24

#include "importLibrary.h"
#include "vehicles.h"
#include "vehicles.cpp"
#include "cars.h"
#include "cars.cpp"
#include "trucks.h"
#include "trucks.cpp"

void getVehicleInput(); //Get input from the user for manufacturer and year built, then store this information in a Vehicle object. Call the displayInfo method and display it on the output.
void getCarInput();
void getTruckInput();


int main() {
  
  cout << "Vehicle Program\n\n";
  cout << "Vehicle: ";
  getVehicleInput();
  cout << "\n\nCar: ";
  getCarInput();
  cout << "\n\nTruck: ";
  getTruckInput();
  
  return 0;
}

void getVehicleInput()
{
  Vehicle vehicle;
  
  string manufac = " ";
  int yBuilt = 0;
  
  cout << "\nEnter the manufacturer: ";
  getline(cin, manufac);
  
  cout << "Enter the year built: ";
  cin >> yBuilt;

  vehicle.setManufacturer(manufac);
  vehicle.setYearBuilt(yBuilt);

  vehicle.displayInfo();
}

void getCarInput()
{
  Car car;
  int numDoors = 0, yBuilt = 0;
  string manufac = " ";
  
  cout << "\nEnter the manufacturer: ";
  cin.ignore();
  getline(cin, manufac);
  cout << "Enter the year built: ";
  cin >> yBuilt;
  cout << "Enter the number of doors: ";
  cin >> numDoors;

  car.setManufacturer(manufac);
  car.setYearBuilt(yBuilt);
  car.setNumberOfDoors(numDoors);
  
  car.displayInfo();
}

void getTruckInput()
{
  Truck truck;
  double towCap = 0, yBuilt = 0;
  string manufac = " ";
  
  cout << "\nEnter the manufacturer: ";
  cin.ignore();
  getline(cin, manufac);
  cout << "Enter the year built: ";
  cin >> yBuilt;
  cout << "Enter the towing capacity: ";
  cin >> towCap;
  truck.setManufacturer(manufac);
  truck.setYearBuilt(yBuilt);
  truck.setTowingCapacity(towCap);
  truck.displayInfo();
}