
/*
Name:Arielle Seechan
Instructor: Genady Maryash
Task 1B
CS 135
This program reads in a sequence of letters and uses it to guide through a maze;printing whether the user is stuck in
the maze or not
*/

#include <iostream>
#include <string>
using namespace std;

int main() {
    string x;
    int maze[6][6] = { // starts at [0][0]
        1,0,1,1,1,1, // row 0, column 1 = start
        1,0,0,0,1,1,
        1,0,1,0,0,1,
        1,0,1,0,1,1,
        1,0,0,0,0,0,
        1,1,1,1,1,1
    };
    int row = 0, col = 1;

    while(cin >> x) { 
        if(x == "R" && maze[row][col + 1] == 0) {
            col = col + 1;
        } else if(x == "L" && maze[row][col - 1] == 0) {
            col = col - 1;
        } else if(x == "U" && maze[row - 1][col] == 0) {
            row = row - 1;
        } else if(x == "D" && maze[row + 1][col] == 0) {
            row = row + 1;
        } 
    }

    if(row == 4 && col == 5) { 
        cout << "You got out of the maze." << endl;
    } else {
        cout << "You are stuck in the maze. " << endl;
    }
}
