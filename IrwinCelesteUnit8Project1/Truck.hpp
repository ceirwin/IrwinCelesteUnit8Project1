//
//  Truck.hpp
//  IrwinCelesteUnit8Project1
//
//  Created by Celeste Irwin on 12/2/21.
//

#ifndef Truck_hpp
#define Truck_hpp

#include <stdio.h>
#include "Vehicle.hpp"

using namespace std;

class Truck : public Vehicle
{
private:
    int towCap;
public:
    Truck()
    {towCap=0;}
    void setTowCap (int cap)
    {towCap=cap;}
    int getTowCap () const
    {return towCap;}
    void displayInfo() const;
};

#endif /* Truck_hpp */
