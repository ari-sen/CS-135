/*
Name:Arielle Seechan
Instructor:Genady Maryash
Lab 4A
Asks user for a size and prints the lower left side of a square
*/
#include <iostream>
using namespace std;

int main() {
    
   int rows;
   cout << "Enter side length: ";
   cin >> rows;
   cout << endl;
   for (int i = 1; i <= rows; i++) {
      for (int j = 1; j <= i; j++) {
         cout << "*";
      }
      cout << endl;
   }

   return 0;
}
