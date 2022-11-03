
/* Write a function void sort2(int &a,int& b) that swaps the values of a and b , 
if a is greater than b and otherwise leaves a and b unchanged and for example: int u = 2, int v=3, int w=4,int x=1,
sort3(u,v)=> u is stil 2 and v 3, while w=1 and x=4
Name:Arielle Seechan
Genady Maryash
Uses void function to swap  a and b parameters if a > b otehrwise they remain the same
*/

#include <iostream>
using namespace std;  // 5 1 3 5 3 1 switch a and b switch b and c

void sort3(int& a, int& b, int& c){
 
    if(a > b && b > c &&  c > a){  
        int x = a;
        int y = b;
        int z = c;
        a = z;
        b = y;
        c = x;
    }
    else if(b > a && a < c && c > b ){  
        int x = a;
        int y = b;
        int z = c;
        a = x;
        b = y;
        c = z;
        

    }
    else if( a > b && c > a){ 
        int x = a;
        int y=b;
        int z= c;
        a = y;     
        b = x;
        c = z;
    } else if( c < b && b > a && a < b && c > a){  
        int x = a;
        int y =b;
        int z = c;
        a = x; 
        b = z;
        c = y;
    } else if( b > c && a < c && a < b){
        int x = a;
        int y = b;
        int z = c;
        a = x;
        b = z;
        c = y;
    }else if( a > b && c > b && c > a){
        int x = a;
        int y = b;
        int z = c;
        a = y;
        b = x;
        c = z;
    } else if( b > c && c < a && b  > a ){ 
        int x = a;
        int y = b;
        int z = c;
        a = z; 
        b = x; 
        c = y;
    } else if( a > b && a > c && c > b ){
        int x = a;
        int y = b;
        int z = c;
        a = y;
        b = z;
        c = x;
    }
    else if( c < b  && c < a && b < a && a > b && a>c){
        int x = a;
        int y = b;
        int z = c;
        a = z;
        b = y;
        c=x;
    }
    
}