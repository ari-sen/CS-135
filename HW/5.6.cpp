/* 
Name:Arielle Seechan
Genady Maryash
HW 5.6

Write a function srtring middle(string str) that returns a string containing the middle character in str
if the legnth of str is odd, or the two middle characters if the length is even
*/

#include <iostream>
#include <string>
using namespace std;

string middle(string str){
    int i = str.length();
    if (str.length() % 2 != 0) {
        return str.substr(i/2,1);
    }
    return str.substr(i/2-1,2);
}

int main (){
    string word;
    cout << "Enter a word:" << endl;
    cin >> word;
    string result = middle(word);
    cout << result;
}