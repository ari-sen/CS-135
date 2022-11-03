/*
Name:Arielle Seechan
Genady maryash
This program determines if two arrays are equal by seeing if they have the same elements and same number in the same order
*/


#include <iostream>
using namespace std;
bool equals(int a[], int a_size, int b[], int b_size){
    if(a_size!=b_size){
        return false;
    }
    else{
        for(int i =0; i < a_size;i++){
            if(a[i] != b[i]){
                return false;
            }
            else{
                return true;
            }
        }
    return true;
    }
}

int main(){
    cout << "Are they equal?";
    int a[] = {1,2,3,4};
    int b[] = {2,3,1,4};
    int sizea = sizeof(a);
    int sizeb = sizeof(b);
    
    if(equals(a,sizea,b,sizeb)){
        cout << "Yes";
    } else{
        cout << "No";
    }
    return 0;
}