/*
Name:Arielle Seechan
Instructor: Genady Maryash
Task 1D
CS 135
This program reads in a sequence of letters and uses it to guide through a maze;printing whether the user is stuck in
the maze or not
*/

#include <iostream>
#include <string>
using namespace std;

int main() {
    int maze[10][10]; //Declares maze array to take in 10 rows and 10 columns

    string input;  
    int startrow;   //declare starting row
    int startcol;   //declare starting col
    int exitrow;    //declare exit row
    int exitcol;    //declare exit col
    char x;         //character type used to identify the semicolon
    int row;        //used to iterate through row
    int col;        //used to iterate through columns


    for(row =0; row < 10; row++)  {     //nested loop used to take in 10 by 10 array: 0-9 rows and 0-9 columns
        for(col = 0; col < 10; col++){
        
            cin >> maze[row][col];
        }
    }

    cin >> startrow;
    cin >> startcol; //Takes in start row AND starting col
    cin >> exitrow;
    cin >> exitcol; //Then takes in exiting row and exiting col
    cin >> x;               // identifies the following character and determines below if its a semicolon

    if(x == ';') {          //if x is = semicolon then assigns the row and col to the starting row and starting column to initiate taking directions
        row = startrow;
        col = startcol;
    }

    while(cin >> input) {
        for(int i=0;i<input.size();i++){ // iterates through string of directions given
        char directions = input[i];
            if(directions == 'R') {          
                if(col !=9 && maze[row][col+1] == 0) { // if column isnt equal to 9 (cant go outside of maze) and the position you're currently at plus a right will equal 0, proceed to save as new position
                    col = col+1;
                }
            }
            else if(directions == 'U') {
                if(row != 0 && maze[row-1][col] == 0){ // '''''''''''''''''''' 0
                    row = row -1;
                }
            }
            else if(directions == 'L') {
                if(col != 0 && maze[row][col-1]== 0){ // """""""""""""""""""" 0
                    col = col - 1;
                }
            }
            else if(directions == 'D'){
                if(row != 9 && maze[row + 1][col]== 0) // """""""""""""""""" 9
                    row = row + 1;
            }
            else if(directions == ';'){     //determines end of the string, and finalizes whetehr user gout of the maze or not by comparing row and col to exit row and exitmaze
                if(row == exitrow && col == exitcol){
                    cout << "You got out of the maze." << endl;
                }
                else{
                    cout << "You are stuck in the maze." << endl;
                }
                row = startrow; //sets it back to move on to next string of directions
                col = startcol;
                }
            }
        }
    }