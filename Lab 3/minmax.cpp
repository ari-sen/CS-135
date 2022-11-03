/*
Name:Arielle Seechan
Instructor: Genady Maryash
Lab 3C
CS 135
This program will print out the minimum and maximum east basin values

*/

#include <iostream>
#include <fstream>
#include <cstdlib>
#include <climits>
using namespace std;

int main() 

{
ifstream fin("Current_Reservoir_Levels.tsv");
//prints out error if file can't be opened
if (fin.fail()) 
{
    cerr << "File cannot be opened for reading." << endl;
    exit(1); // exit if failed to open the file
}
string junk;
string date;       // new string variable
getline(fin, junk);
double eastSt;
double minimum = 65; //sets a value for minimum to be compared to
double maximum = eastSt;
while(fin >> date >> eastSt ) { 
    fin.ignore(INT_MAX, '\n'); //skips to the end of line,
    //if statements to save value and keep track if volume value is less than or greater than
    //the current value
    if(eastSt < minimum)
    {
        minimum = eastSt;
    }
    else if(eastSt > maximum)
    {
        maximum = eastSt;
    }
    
}
cout << "The minimum is " << minimum << " billion gallons." << endl;;
cout << "The maximum is " << maximum << "billion gallons." << endl;;
    fin.close();
return 0;

}