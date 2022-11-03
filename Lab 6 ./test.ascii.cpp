/*
Name:Arielle Seechan
Genady Maryash
A program that asks the user to input a line of text and converts all characters to ASCII 

*/


#include<iostream>
#include <string>
using namespace std;

void ASCIIline(string s){
    for(int i = 0; i < s.length(); i++){
        cout << s[i]<< " " << int(s[i])<< endl;
    }
}   


int main(){
    string line;
    cout << "Enter a line: " << endl;
    getline(cin, line);
    ASCIIline(line);
    
return 0;
}
