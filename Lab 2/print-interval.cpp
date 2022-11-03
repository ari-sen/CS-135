/*
Author:Author: Arielle Seechan
Course: CSCI-135
Instructor: Genady Maryash

Asks user to enter a lower and upper limit and prints out all the numbers
in that range , excluding the upper limit.
*/

#include <iostream>
using namespace std;
int main(){
    int i,L, U;
    cout << "Please enter lower limit: ";
    cin >> L ;
    cout << "Please enter the upper limit: ";
    cin >> U;

        for(int i = L; i < U; i++ ) {
            cout << i << " ";
        }
    return 0;
}