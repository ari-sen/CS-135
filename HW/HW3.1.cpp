/* 
Author:Arielle Seechan
Genady Maryash
CS 135
A  program that reads in an integer and determine whether its zero, positive, or negative.

*/

#include <iostream>
using namespace std;
int main() 
{
    //declares a variable , integer, that will take in an integer from user
    int integer;
    // asks user for an integer
    cout << "Please enter an integer: ";
    // takes in the users integer as variable integer
    cin >> integer;
    // uses if and else statements to determine whether integer is negative, zero, or positive
        if(integer == 0)
        {
            cout << "zero";
        }else if(integer < 0)
        {
            cout << "negative";
        }else if(integer > 0) 
        {
            cout << "positive";
        }

    return 0;

}
