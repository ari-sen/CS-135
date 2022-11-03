/*
Author: Arielle Seechan
Course: CSCI-135
Instructor: Genady Maryash
Assignment: HW 2.1

This program will ask the said user for a number of gallons of gas that's in a tank , the fuel efficiency in miles
per gallon, and the price per gallon. It will proceed to calculate the cost per 100 miles and the mileage it can go with the gas it contains.

*/

#include <iostream>
using namespace std;
int main(){
   double gallons,fueleffpergal,price;
    

    cout << "Please enter the number of gallons of gas in the tank: " << endl;
    cin >> gallons; 
    cout << "Please enter the fuel efficiency per gallon in miles: " << endl;
    cin >> fueleffpergal;
    cout << "Please enter the price of gas per gallon: " << endl;
    cin >> price;

    double newprice = price / fueleffpergal * 100;
    double mileage = fueleffpergal * gallons;

    cout << "The cost per 100 miles is " << newprice << " dollars" << endl;
    cout << "The mileage the car can go is " << mileage << " miles" << endl; 
    return 0;
}


    
         

   



