/*
Author:Author: Arielle Seechan
Course: CSCI-135
Instructor: Genady Maryash

This program will ask the user for a number,n, between 0 and 100, and prints the square
number

*/
#include  <cmath>
#include <iostream>
using namespace std;
 int main() {
     int number;
     cout << "Enter an integer between 0 and 100: ";
     cin >> number;
     
    while(number < 1 || number > 99)
    {
        cout << "Re-enter a valid number between 1-100: ";
        cin >> number;      
            }
    int squared = number * number;
    cout << "The number " << number << " squared is " << squared;
        
    return 0;
 }