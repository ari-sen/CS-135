/*
Author:Author: Arielle Seechan
Course: CSCI-135
Instructor: Genady Maryash

This program will ask the user for a year number and determine using if,elif,else statements 
if the year is a common year or leap year.
*/

#include <iostream>  
using namespace std;
int main() {
    int year;
        cout << "Please enter an integer that represents a year number: ";
        cin >> year;

        if (year% 4 != 0) {
            cout << "Common Year";
        } else if ( year % 100 != 0) {
            cout << "Leap Year " ;
        } else if (year % 400 != 0) {
            cout << "Common Year";
        } else {
            cout << "Leap Year";
        }
    return 0;
}
