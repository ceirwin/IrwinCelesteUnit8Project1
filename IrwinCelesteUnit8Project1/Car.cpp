//
//  Car.cpp
//  IrwinCelesteUnit8Project1
//
//  Created by Celeste Irwin on 12/2/21.
//

#include "Car.hpp"
#include <iostream>

using namespace std;

void Car::displayInfo() const
{
    Vehicle::displayInfo();
    cout<<endl <<"Doors: " <<doors;
}
