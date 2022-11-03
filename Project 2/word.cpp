/*
Name:Arielle Seechan
Grnady maryash
Project 2 Task A
*/

#include <iostream>
#include <sstream>
#include <string>
#include <fstream>
 //
using namespace std;
//functions
string split(string line, int width){
    bool switchh = true;
    string newstr  = "";
    int charcount = 0;
    istringstream strm(line); // string stream to read line
    string word;
    while(strm >> word){
        int len = word.length() + 1; 
        if(!switchh){
            if (len+charcount < width){
                charcount = charcount + len;
                newstr = newstr + "\t" + word;   
            }else{
                charcount = word.length();
                newstr = newstr + "\n" + word;   //** try \n since /t creates formatting issue
            }
        }else if(switchh){
            charcount = charcount + word.length();
            newstr = newstr + word;
            switchh = false;
        }
    }
    return newstr;
}
string output(string readinp, int charc){
    bool switchh = true;
    bool output = false;
    string linecc;
    string newstr = "";
    string paragraph = ""; //empty string
    while (getline(readinp, linecc))
    {
        paragraph = paragraph + " " + linecc;
        if(linecc.length() < charc){
            newstr =  newstr + split(paragraph, charc);
            output = true;
            if (linecc == "" ){
                newstr = newstr + "\n";
            }
            newstr = newstr + "\n";
            paragraph = "";
        }
        else if(linecc.length() > charc){
            output = false;
        }

    }
    if (!output){
        newstr = newstr + split(paragraph, charc);
    }
    if(newstr[newstr.length()-1] == '\n'){
        return newstr.substr(0,newstr.length()-1);
    }
    return newstr;
}




int main(){
    string filename;
    string line;
    int lengthh = line.length();
    cout << "Enter the filename: ";
    cin >> filename;
    ifstream endfile;
    endfile.open(filename);
    getline(endfile, line);
    int i = line.find(';');
    int charc = (int)(line.substr(0,i));
    string outputfile = line.substr(i+1-lengthh); //find a way to find index of semicolon in first line
    string file_output = output(endfile, charc);
    endfile.close();
    ofstream outfile;
    outfile.open(outputfile);
    outfile << file_output;
    outfile.close();
    
}
