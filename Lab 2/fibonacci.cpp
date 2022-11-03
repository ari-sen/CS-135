/*
Name:Arielle See chan
Professor:Genady Maryash
CS 135
This program prints out the fibonacci sequence all the way up until the 59th term
*/

#include <iostream>
using namespace std;
int main() {
int i = 1;
int fib[60];
fib[0] = 0;
fib[1] = 1;
cout << "0" << endl;
    while( i < 60) {
        fib[i] = fib[i-1] + fib[i-2];
        cout << fib[i] << endl;
        i++;
    }
    return 0;
}
