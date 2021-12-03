//
//  main.cpp
//  IrwinCelesteUnit8Project1
//
//  Created by Celeste Irwin on 12/2/21.
//
//Celeste Irwin
//CIS 1202 800
//12-02-2021

#include <iostream>
#include "Vehicle.hpp"
#include "Car.hpp"
#include "Truck.hpp"
#include <string>

using namespace std;

//testing functionality of Vehicle, Car, and Truck classes
int main(int argc, const char * argv[])
{
    Vehicle newVehicle;
    Car newCar;
    Truck newTruck;
    string man;
    int year, doors, cap;
    
    cout<<"Vehicle program" <<endl;
    cout<<endl <<"Vehicle: ";
    cout<<endl <<"Enter the manufacturer: ";
    getline(cin, man);
    cout<<"Enter the year built: ";
    cin>>year;
    newVehicle.setManufacturer(man);
    newVehicle.setYearBuilt(year);
    newVehicle.displayInfo();
    
    cout<<endl <<endl <<"Car: ";
    cout<<endl <<"Enter the manufacturer: ";
    cin.ignore();
    getline(cin, man);
    cout<<"Enter the year built: ";
    cin>>year;
    cout<<"Enter the number of doors: ";
    cin>>doors;
    newCar.setManufacturer(man);
    newCar.setYearBuilt(year);
    newCar.setDoors(doors);
    newCar.displayInfo();
    
    cout<<endl <<endl <<"Truck: ";
    cout<<endl <<"Enter the manufacturer: ";
    cin.ignore();
    getline(cin, man);
    cout<<"Enter the year built: ";
    cin>>year;
    cout<<"Enter the towing capacity: ";
    cin>>cap;
    newTruck.setManufacturer(man);
    newTruck.setYearBuilt(year);
    newTruck.setTowCap(cap);
    newTruck.displayInfo();
    
    return 0;
}
