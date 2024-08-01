//Crystal Forgione
//24.SU.CIS.1202.201
//07-28-24

// #include "importLibrary.h"

#ifndef TRUCK_H
#define TRUCK_H

class Truck : public Vehicle
{
  private:
    int towingCapacity;

  public:
    Truck();
    void setTowingCapacity(int);
    void displayInfo();
};

#endif