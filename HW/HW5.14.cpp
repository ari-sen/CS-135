/* Write a function void sort2(int &a,int& b) that swaps the values of a and b , 
if a is greater than b and otherwise leaves a and b unchanged and for example: int u = 2, int v=3, int w=4,int x=1,
sort2(u,v)=> u is stil 2 and v 3, while w=1 and x=4
Name:Arielle Seechan
Genady Maryash
Uses void function to swap  a and b parameters if a > b otehrwise they remain the same
*/

#include <iostream>
using namespace std;

void sort2(int& a, int& b){
    if(a > b) {
        int x =a;
        a =b;
        b=x;
    }
    else{
         a = a;
         b = b;
    }
}
