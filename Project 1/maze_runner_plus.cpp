/*
Name:Arielle Seechan
Instructor:Genady Maryash
Takes in a string of directions and determines if it gets user out of a maze made out of arrays or not
*/

#include <iostream>
using namespace std;
int main() {

//
//Name:Arielle Seechan
//Instructor: Genady Maryash
//Lab 3C
//CS 135
//This program reads in a sequence of letters and prints out directions.r

//


#include <iostream>
using namespace std;
int main() {

string x;
int row = 0;
int col = 1;
cin >> x;
if(char[x] == ";") {
    fin.ignore(INT_MAX, '\n');
}
else{
    while(cin >> x ) { // While the reading operation is a success 
    int maze[6][6] = {
        1,0,1,1,1,1,
        1,0,0,0,1,1,
        1,0,1,0,0,1,
        1,0,1,0,1,1,
        1,0,0,0,0,0,
        1,1,1,1,1,1
        };

        if(x == "U") 
        {
            row = row - 1;
        }
        else if(x == "D") 
        {
            row = row + 1;
        }
        else if(x == "R") 
        {
            col = col + 1; 
        }
        else if(x == "L") 
        {
            col = col - 1;
        }
        else {
            cout << "Error";
        }
}

    if ( row == 4 && col == 5) 
    {
        cout << "You got out of the maze.";
    }
    else if(row < 0 || row > 6 ) 
    {
        cout << "You got out of the maze.";
    }
    else if(col < 0 || col > 6) 
    {
        cout << "You got out of the maze."; 
    }
    else{
        cout << "You are stuck in the maze.";
    }

return 0;
        }
    }
}

    

