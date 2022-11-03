/*
Author:Author: Arielle Seechan
Course: CSCI-135
Instructor: Genady Maryash

This program will ask the user for two numbers and determine + state which is the smaller of the two

*/

#include <iostream>
using namespace std;

int main() {
    int numberone , numbertwo;
        cout << "Enter the first number: ";
        cin >> numberone;
        cout << "Enter the second number: ";
        cin >> numbertwo;
            if( numberone < numbertwo) {
                cout << " The smaller of the two is " << numberone << endl;
            } else {
                cout << "The smaller of the two is " << numbertwo << endl;
            }
    return 0;
}