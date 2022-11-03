#include <iostream>
using namespace std;
int max3(int a, int b, int c) {
int max;
    if(a>b && a>c){
        return max = a;
    } else if(b > c && b > a ) {
        return max = b;
    } else if(c > a && c > b){
        return max = c;
    }
  return max;
}

int main(){
    int a , b ,c;
    cout << "Enter three numbers:";
    cin >>  a >> b>>c;
    int d = max3(a,b,c);
    cout << d ;
}