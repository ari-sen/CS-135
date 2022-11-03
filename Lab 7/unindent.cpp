/*
Name: Arielle Seechan
Genady Maryash
Program Description: Removes leading spaces within a string
*/

#include <iostream>
#include <cctype>
using namespace std;

string removeLeadingSpaces(string line) {
  for(int i=0;i < line.length();i++){// while the character at the index is a space
    if(!isspace(line[i])){
      return line.substr(i,line.length()-i);
    }
  }
  return line;
}
int main() {

  string line;
  cout << "enTER A string:";
  while(getline(cin,line)){
    cout << removeLeadingSpaces(line) << endl;
  }
  return 0;
}

