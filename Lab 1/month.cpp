/*
Author:Author: Arielle Seechan
Course: CSCI-135
Instructor: Genady Maryash

Accomodates leap years, to print out the number of days in a month of a common or leap year
*/




#include <iostream>
using namespace std;

int main() {
    int month,year;

        cout << "Please enter a year: ";
        cin >> year;
        cout << "Please enter a month number: ";
        cin >> month;

        if(month == 1|| month ==3||month == 5||month == 7||month == 8 || month == 10||month == 12  ) {
            cout<<"31 days";
        }else if(month == 4||month == 6|| month == 9||month == 11){
            cout<< "30 days";
        }else if(month == 2 && (year % 400 == 0 )|| (year % 100 != 0 && year % 4==0 )){
            cout << "29 days";
        }else if(month == 2){
            cout << "28 days";
        }
        

    return 0;
}