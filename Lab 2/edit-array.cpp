/*
Author: Arielle Seechan
Course: CSCI-135
Instructor: Genady Maryash

Prints out array of 10 1's and proceeds to ask user for an index and value, editing that array with the user's index and value.
If index is out of range, it exits the loop
*/



#include <iostream>
using namespace std; 
// declare main function
int main() {
    //declares a constant being 10 to use for index range and iteration 
    const int CAPACITY = 10;
    int myData[CAPACITY];
    //declares index and value variables
    int index,v;
    //uses for loop to print 10 elements to fill an array with 1's
    for(int i = 0; i < CAPACITY; i++){
        myData[i] = 1;
        cout << myData[i] << " ";
    }
    // uses a do(ask for index and value, check if the index is in range and print that new element within the array
    do{
        cout << " " << endl;
        cout << "Enter index:" << endl;
        cin >> index;
        cout <<"Enter value: " << endl;
        cin >> v;
    // uses for loop to reprint the 10 elements of the array if the index is within the capacity constant of being less than 10 and > or equal to 0
        for(int i = 0; i < 10;i++)
        {
            if(index >= 0 && index < CAPACITY)
                {
                myData[index] = v;
                cout<< myData[i] << " ";
                }
            }
    // condition has to be true for the do to keep being executed: index has to be greater than or equal to 0 
    //and index has to be less than 10
        }while(index >= 0 && index <CAPACITY);
    
    //if statement outside of do-while loop that exits the program if the index is out of range: that being that
    //index is less than 0 or greater than 9, since indices start at 0 and not 1 making the last index 9, not 10
    if(index < 0 || index > 9 )
    {
         cout << "Index out of range.Exit.";
    }

    return 0;
}

