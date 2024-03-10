#include<iostream>
using namespace std;
int main(){
  float x,y;
  cout<<"enter x coordinate : ";
  cin>>x;
  cout<<"enter y coordinate :";
  cin>>y;
  if(x>0&&y>0)
  cout<<"the coordinate " <<x <<" and " <<y <<" is found in frist coordinate";
  else if(x>0&&y<0)
   cout<<"the coordinate " <<x <<" and " <<y <<" is found in fourth coordinate";
  else if(x<0&&y>0)
   cout<<"the coordinate " <<x <<" and " <<y <<" is found in second coordinate";
  else
   cout<<"the coordinate " <<x <<" and " <<y << "is found in frist coordinate";
  
  
}