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
    string man;
    int year, doors, cap;
    
    cout<<"Vehicle program" <<endl;
    cout<<endl <<"Vehicle: ";
    cout<<endl <<"Enter the manufacturer: ";
    getline(cin, man);
    cout<<"Enter the year built: ";
    cin>>year;
    Vehicle newVehicle(man, year);
    newVehicle.displayInfo();
    
    cout<<endl <<endl <<"Car: ";
    cout<<endl <<"Enter the manufacturer: ";
    cin.ignore();
    getline(cin, man);
    cout<<"Enter the year built: ";
    cin>>year;
    cout<<"Enter the number of doors: ";
    cin>>doors;
    Car newCar(doors, man, year);
    newCar.displayInfo();
    
    cout<<endl <<endl <<"Truck: ";
    cout<<endl <<"Enter the manufacturer: ";
    cin.ignore();
    getline(cin, man);
    cout<<"Enter the year built: ";
    cin>>year;
    cout<<"Enter the towing capacity: ";
    cin>>cap;
    Truck newTruck(cap, man, year);
    newTruck.displayInfo();
    
    return 0;
}
