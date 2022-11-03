/*
Name: Arielle Seechan
Genady maryash
Program Description: Uses keyword ot shift each letter in plain text
*/

#include <iostream>
using namespace std;


char shiftChar(char c, int rshift) {
  char newc = int(c) + rshift;
    if(c<91 && newc > 90){ 
        newc = newc -26;
    }
    if(!isalpha(newc)){      
        newc = newc-26;
    }
    if(!isalpha(c)){ 
        return c;
    }
    return newc;
}


string encryptVigenere(string plaintext, string keyword) {
  int keywordindex = 0;
  string encrypted = "";
  int shift = (int)keyword[keywordindex] - 97;
  //for every index i in plaintext
  for (int i = 0; i < plaintext.length(); i++){
      while(!isalpha(plaintext[i])&& i<plaintext.length()){   
        encrypted += plaintext[i];
        i++;
      }

        encrypted+=shiftChar(plaintext[i],(int)keyword[keywordindex]-97); // shift is calculated  # characters from 'a'
        keywordindex++;
            if(keywordindex == keyword.length()){
                 keywordindex = 0; //resets keyword to wrap back around
        }
      }
      return encrypted;
  }
    
int main() {
  string plain;
  string keywordshift;
  cout << "Enter a text:";
  getline(cin, plain);
  cout << "Enter a shift:";
  cin >> keywordshift;
  cout << "Cipher Text:" << encryptVigenere(plain,keywordshift);
}


