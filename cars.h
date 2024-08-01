//Crystal Forgione
//24.SU.CIS.1202.201
//07-28-24

// #include "importLibrary.h"

#ifndef CAR_H
#define CAR_H

class Car : public Vehicle
{
  private:
    int numberOfDoors;

  public:
    Car();
    void setNumberOfDoors(int);
    void displayInfo();
};

#endif