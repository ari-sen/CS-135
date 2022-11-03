/*
Author:Author: Arielle Seechan
Course: CSCI-135
Instructor: Genady Maryash

This program will ask the user for three numbers and determine + state which is the smaller of the three

*/

#include <iostream>
using namespace std;

int main() {
    int numberone, numbertwo, numberthree;
        cout << "Please enter the first number: ";
        cin >> numberone;
        cout << "Please enter the second number: ";
        cin >> numbertwo;
        cout << "Please enter the third number: ";
        cin >> numberthree;

        if ((numberone < numbertwo ) && (numberone < numberthree)) {
            cout << "The smaller of the three numbers is " << numberone;
        } else if ((numbertwo < numberone) && (numbertwo < numberthree)) {
            cout << "The smaller of the three numbers is " << numbertwo;
        } else {
            cout << "The smaller of the three numbers is " << numberthree;
        }
    return 0;
}






