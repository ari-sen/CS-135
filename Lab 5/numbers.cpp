
/*
Uses a bool type functioln to determine whether a number is divisble by another number or not
Name:Arielle Seechan
Instructor:Genady Maryash
*/
#include <iostream>
using namespace std;
bool isDivisibleBy(int n, int d)
{
    if (d == 0) {
        return false;
    }else if(n%d == 0) {
        return true;
    }
    else {
        return false;
    }
}
bool isPrime(int n)
{
    if(n < 2){
        return false;
    }
        for(int i = 0; i < n;i++) {
            if((i!= 1 ) && (isDivisibleBy(n,i))) {
                return false;
            }
        }
    return true;
}
int nextPrime(int n){
    for(int i = n + 1; i > n; i++) {
        if(isPrime(i)){
            return i;
        }
    }
    return false;
}
int countPrimes(int a, int b){
  int count = 0;
  for (int i = a; i <= b; i++){
    if (isPrime(i)){
      count=count+1;
    }
  }
  return count;
}
bool isTwinPrime(int n){
    int a = n-2;
    int b = n+2;
    if(isPrime(n)){
        if(isPrime(a)||isPrime(b)){
            return true;
        }
    }
    return false;
}
int nextTwinPrime(int n){
        for(int i = n + 1; i > n; i++) {
            if(isTwinPrime(i)){
                return i;
            }
        }
     return 0;
    }
int largestTwinPrime(int a, int b){
    for(int i = b; i >= a; i--){
        if(isTwinPrime(i)){
            return i;
        }
    }
  return -1;
}
 

int main () {
  int a,b;
  cout << "Enter a number";
  cin >> a;
  cout << "Another:";
  cin >> b;
  int num = largestTwinPrime(a, b);
  cout << "The greatest twin prime is: " << num;
  return 0;
}


