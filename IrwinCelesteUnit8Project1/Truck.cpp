//
//  Truck.cpp
//  IrwinCelesteUnit8Project1
//
//  Created by Celeste Irwin on 12/2/21.
//

#include "Truck.hpp"
#include <iostream>

void Truck::displayInfo() const
{
    Vehicle::displayInfo();
    cout<<endl <<"Towing capacity: " <<towCap;
}
