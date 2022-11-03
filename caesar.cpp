/*
Name:Arielle Seechan
Genady Maryash
A program that asks the user to input a line of text and right shift, converts line to ascii code

*/


using namespace std;
#include <iostream>
#include <string>

char shiftChar(char c, int rshift){
    char newc = int(c) + rshift;
    if(c<91 && newc > 90){ //if character's ascii code is Z(90) and the new character caused by shift isgreater than ascii code beyond letters, wrap back around
        newc = newc -26;
    }
    if(!isalpha(newc)){       //if new character is not a letter , 
        newc = newc-26;
    }
    if(!isalpha(c)){ //if its a number for example, returns back # since we dont want to convert that
        return c;
    }
    return newc;
}
string encryptCaesar(string plaintext, int rshift){
    string newstr = "";
    for(int i = 0; i < plaintext.length(); i++){
        newstr = newstr + shiftChar(plaintext[i], rshift);
    
    }
    return newstr;
}

int main(){
    string input;
    int rightshift; // declares right shift integer
    cout << "Enter a line: " ; 
    getline(cin, input);
    cout << "Enter the right shift: ";
    cin>>rightshift;
    if(rightshift < 0 || rightshift > 25){ //keeps range by checking if shift is between 0 and 25
     while(rightshift < 0 || rightshift > 25){
        cout << "Enter a valid right shift from 0 to 25: " ;
        cin >> input;
        }
    }
    else{
        cout << "Cipher Text:" <<  " " << encryptCaesar(input, rightshift);
    }

    
}







