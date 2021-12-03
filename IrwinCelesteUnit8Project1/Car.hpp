//
//  Car.hpp
//  IrwinCelesteUnit8Project1
//
//  Created by Celeste Irwin on 12/2/21.
//

#ifndef Car_hpp
#define Car_hpp

#include <stdio.h>
#include "Vehicle.hpp"

class Car : private Vehicle
{
private:
    int doors;
public:
    Car()
    {doors=0;}
    void setDoors (int numDoors)
    {doors=numDoors;}
    int getDoors () const
    {return doors;}
    void displayInfo() const;
};

#endif /* Car_hpp */
