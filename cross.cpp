/*
Name:Arielle Seechan
Instructor:Genady Maryash
Lab 4C
Asks user for size, and prints cross of that size
Name:Arielle Seechan
Instructor:Genady Maryash
Lab 4C
Asks user for size and prints a cross with that size
*/
#include <iostream>
using namespace std;

int main() {
    
   int rows;
   cout << "Enter size: ";
   cin >> rows;
   cout << endl;
   for (int i = 1; i <= rows; i++) {
      for (int j = 1; j <= rows; j++) {
        if(i == j || j == rows - i + 1) {
            cout << "*";
        }
        else{
            cout << " ";
        }
      }
      cout << endl;
   }

   return 0;
}

