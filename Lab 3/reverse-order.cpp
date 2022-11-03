/*
Name:Arielle Seechan
Instructor:Genady Maryash
Asks the user to input two dates which reports The program should report the West basin elevation for all days in the interval in the reverse chronological order (from the later date to the earlier).
*/
#include <iostream>
#include <fstream>
#include <cstdlib>
#include <climits> 
#include <limits>
using namespace std;
int main() {
	ifstream fin("Current_Reservoir_Levels.tsv");//prints out error if file can't be opened
	if (fin.fail()) {
    cerr << "File cannot be opened for reading." << endl;
    exit(1); // exit if failed to open the file
	}
	string junk;        // new string variable
	getline(fin, junk);
	string date;
    double eastSt,eastEl,westSt,westEl; //declares columns from TSV file
    int index = 0;
    string dates[366]; // uses an array to declare an array of strings representing the dates 0-365
    double westelevations[366]; // corresponnds to the date full of arrays from 0-365, double because elevations are decimals
	
	string startingdate, endingdate; // starting and ending date to be used toiterate through array
	bool conditionn = false; //declares a bool type and declares it as false
	cout << "Please input a starting date that will represent the beginning of an interval: ";
	cin >> startingdate; //take in a starting date
	cout << "Please enter an end date that will represent the end of an interval: ";
	cin >> endingdate; //take in an ending date
	
	while(fin >> date >> eastSt >> eastEl>> westSt>> westEl) { 
    fin.ignore(INT_MAX, '\n'); //skips to the end of line
            if(startingdate == date)  // changes bool condition to true because it it satisfies the condition of starting date being == date
            {
                conditionn = true;
            }
            if(conditionn)  //loop runs until it is broken by the if statement we set below:end date
            {
                dates[index] = date; //assigns element value to date
                westelevations[index] = westEl; // assigns the element value to western elevations
                index = index + 1;
            }

            if(endingdate == date) 
            {
                conditionn = false;
            }
        }
        for(int i = index - 1; i >= 0; i--) { //uses for loop to index-1 (index ended at 366 to get 365), decrement i
            cout << dates[i] << "  "  << westelevations[i]<< " ft" << endl;
        
        fin.close();


    }

}
        