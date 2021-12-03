//
//  Vehicle.hpp
//  IrwinCelesteUnit8Project1
//
//  Created by Celeste Irwin on 12/2/21.
//

#ifndef Vehicle_hpp
#define Vehicle_hpp

#include <stdio.h>
#include <string>

using namespace std;

class Vehicle
{
private:
    string manufacturer;
    int yearBuilt;
public:
    Vehicle()
    {manufacturer=""; yearBuilt=0;}
    Vehicle(string man, int year)
    {manufacturer=man; yearBuilt=year;}
    void setManufacturer (string man)
    {manufacturer=man;}
    void setYearBuilt(int year)
    {yearBuilt=year;}
    string getManufacturer() const
    {return manufacturer;}
    int getYearBuilt() const
    {return yearBuilt;}
    void displayInfo ();
};

#endif /* Vehicle_hpp */
