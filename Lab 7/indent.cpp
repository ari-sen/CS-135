/*
Name: Arielle Seechan
Genady Maryash
Program Description: Indents accoridngly to opening and closing blocks
*/


#include<iostream>
#include<cctype>
using namespace std;
string removeLeadingSpaces(string line) {
  for(int i=0;i < line.length();i++){// while the character at the index is a space
    if(!isspace(line[i])){
      return line.substr(i,line.length()-i);
    }
  }
  return line;
}

int countChar(string line, char c){
  int taamount = 0;
  for(int i = 0; i < line.length(); i++){
    if (line[i]==c){ //if character of line equals open or closing bracket
      taamount++;    //+1 amount, used to tally amount of opens and closed to correspond to tabs
    }
  }
  return taamount;
}



int main(){
  string line;
  int tabamount = 0;
  while(getline(cin, line)){
    string newresult = removeLeadingSpaces(line);
    if(newresult[0] == '}'){
      tabamount--;
    }
    for (int i = 0; i < tabamount; i++){
      cout<< "\t";
    }
    cout<< removeLeadingSpaces(line) <<endl;
    tabamount += countChar(line, '{');
    if(newresult[0] != '}'){
       tabamount -= countChar(line, '}');
     }
  }
  return 0;
} 


