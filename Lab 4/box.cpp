/*
Name:Arielle Seechan
Instructor:Genady Maryash
Lab 4A
Asks user for width and height and makes a box of asterisks using givin width and height
*/
#include <iostream>
using namespace std;

int main() {
    
   int rows,columns;
   cout << "Enter width: " ;
   cin >> columns;
   cout << "Enter size: ";
   cin >> rows;
   cout << endl;
   for (int i = 1; i <= rows; i++) {
      for (int j = 1; j <= columns; j++) {
         cout << "*";
      }
      cout << endl;
   }

   return 0;
}







