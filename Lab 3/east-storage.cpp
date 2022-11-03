/*
Name:Arielle Seechan
Instructor:Genady Maryash
This program reads in a text file and asks user for a date, printing out the East Basin Storage amount corresponding to the date entered
*/
#include <iostream>
#include <fstream>
#include <cstdlib>
#include <climits>
using namespace std;
int main() {

ifstream fin("Current_Reservoir_Levels.tsv");
//prints out error if file can't be opened
if (fin.fail()) 
{
    cerr << "File cannot be opened for reading." << endl;
    exit(1); // exit if failed to open the file
}
string junk;        // new string variable
getline(fin, junk);
//declares two variables as a string type: date and pPoint_time since point_time is the name of the date colum in the read file
string date, Point_time;
// declares the name of Eastbasin storage as a double since it has decimals
double AUGEVolume; 
//asks user for date in a certain format
cout << "Please enter a date in MM/DD/YYYY form: ";
//saves that input to the string variable that was declared earlier
cin >> date;
// this loop reads the file line-by-line
// extracting the 2 values we need which the date and eastbasin storage on each iteration 
while(fin >> Point_time >> AUGEVolume) { 
    
    
    fin.ignore(INT_MAX, '\n'); //skips to the end of line, 
      if(Point_time == date)
      {            
        //prints the value from the file  
        cout << "East basin storage is: "<< AUGEVolume << " billion gallons" << endl;
      }

    }
//exits reading the file
    fin.close();
return 0;
}

