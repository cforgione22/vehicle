//Crystal Forgione
//24.SU.CIS.1202.201
//07-28-24

// #include "importLibrary.h"

#ifndef VEHICLE_H
#define VEHICLE_H

class Vehicle 
{
  private:
    string manufacturer;
    int yearBuilt;

  public:
    Vehicle();
    string getManufacturer(string);
    void setManufacturer(string);
    int getYearBuilt(int);  
    void setYearBuilt(int);
    void displayInfo(int, string);
};

#endif