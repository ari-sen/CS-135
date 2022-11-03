/*
Author: Arielle Seechan
Course: CSCI-135
Instructor: Genady Maryash
Assignment: HW 1.7

This program will ask a user for three of their favorite foods and then proceed to list
all three in separate lines.
*/
#include <iostream>
using namespace std;
int main(){
  cout << "Please enter your three favorite foods" << endl;
  string one;
  string two;
  string three;
  cin >> one >> two >> three;
  cout << one << endl;
  cout << two << endl;
  cout << three << endl;
  return 0;
  }


