/*
Name:Arielle Seechan
Instructor: Genady Maryash
Lab 3C
CS 135
This program will ask a user for two dates, a start date and an
end date, using these dates toiterate through the TSV file and see whether
the west and east elevation are greater , smaller than or equal to each other

*/

#include <iostream>
#include <fstream>
#include <cstdlib>
#include <climits> 
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
	double eastSt,eastEl,westSt,westEl;
	string startingdate, endingdate;
	bool conditionn = false; //declares a bool type and declares it as false
	cout << "Please input a starting date that will represent the beginning of an interval: ";
	cin >> startingdate; //take in a starting date
	cout << "Please enter an end date that will represent the end of an interval: ";
	cin >> endingdate; //take in an ending date
	
	while(fin >> date >> eastSt >> eastEl>> westSt>> westEl) { 
    fin.ignore(INT_MAX, '\n'); //skips to the end of line
    	if(startingdate == date)
		{
			conditionn = true;		// changes bool condition to true because it it satisfies the condition of starting date being == date
		}
	
		if (conditionn){ //loop runs until it is broken by the if statement we set below:end date
			if(eastEl>westEl){
				cout<<date<< " East" <<endl;    //prints east if its greater than west elevation values
            }
			else if(westEl>eastEl){
				cout<<date<< " West" <<endl;//prints west if its greater than east eleation values
			}
			else if(eastEl==westEl){
				cout<<date<< " Equal" <<endl; //prints equal if both values are equal
			}
		}
	
		if(endingdate == date)
		{ //declares boolean value as false, which stops the program at enddate
			conditionn = false;
    	}
 	}
	fin.close();


}