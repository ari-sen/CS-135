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
    
   int width,height,spaces,stars,k;
   cout << "Enter width: ";
   cin >> width;
   cout << "Enter height: ";
   cin >> height;
   cout << endl;
   if(width/2 < height) {
        cout << "Impossible shape!";
   } else {
       for (int stars = width; stars > height; stars = stars-2) 
    {
        for(int spaces = 0; spaces >= -1; spaces = spaces + 1) 
        {
            cout << " ";
             for(int k = stars; k < (width * 2); k--) {
                    cout << "*";
        
            }
        }
        cout << endl;
   }
   
    }
    return 0;
}
