//
//  Vehicle.cpp
//  IrwinCelesteUnit8Project1
//
//  Created by Celeste Irwin on 12/2/21.
//

#include "Vehicle.hpp"
#include <iostream>

using namespace std;

void Vehicle::displayInfo () const
{
    cout<<endl <<"Vehicle Information: ";
    cout<<endl <<"Manufacturer: " <<manufacturer;
    cout<<endl <<"Year Built: " <<yearBuilt;
}
