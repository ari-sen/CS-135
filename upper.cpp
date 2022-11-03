/*
Name:Arielle Seechan
Instructor:Genady Maryash
Lab 4
Asks user for a size and prints the lower left side of a square
*/
#include <iostream>
using namespace std;

int main() 
{
    
   int rows;
   cout << "Enter side length: ";
   cin >> rows;
   cout << endl;
   for (int i = 0; i < rows; i++) 
    {
        for(int j = 0; j < rows; j= j+2) 
        {
            if(j<i) 
            {
                cout << " "; 
            } else 
            {
                cout << "*";
            }
            
        }
        cout << endl;
    }
    return 0;
}
