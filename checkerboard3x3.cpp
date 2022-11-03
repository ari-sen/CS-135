/*
Name:Arielle Seechan
Instructor:Genady Maryash
This program asks user for a width and height and uses it toprint a 3x3 checkerboard even if the width or height arent multiples of 3
*/

#include <iostream>
using namespace std;
int main(){
  int width,height;
  cout<<"Enter width: "; //ask user for width
  cin>> width;  
  cout<<"Enter height: "; //ask user for height
  cin>> height;  
  cout<<endl;
  int stars = 0; 
  int spaces = 0; 
  int verticalcount = 0;  
  bool conditionn = true; 
  for (int i = 0; i< height; i++){  
    for (int j = 0; j < width; j++){
      if (conditionn){
        if(stars<3){
          cout<<"*";
          stars=stars+1;
        }
        else{
          cout<<" ";
          spaces=spaces+1;
          if(spaces==3){
            stars = 0;
            spaces = 0;
          }
        }
      }
      else{
        if(spaces<3){
          cout<<" ";
          spaces=spaces+1;
        }
        else{
          cout<<"*";
          stars=stars+1;
          if(stars == 3){
            stars=0;
            spaces=0;
          }
        }
      }
    }
    spaces = 0;
    stars =0;
    cout << endl;
    verticalcount = verticalcount+1; //keeps track of the vertical count of each "checker" which should be 3
    if (verticalcount == 3){      
      if(conditionn){
        conditionn = false;
      }
      else{
        conditionn = true;
      }
      verticalcount = 0;
    }
  }
  return 0;
}

