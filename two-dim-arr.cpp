#include<iostream>
using namespace std;
int main(){
int my[3][3];
for(int i=0;i<3;i++){
  for(int j=0;j<3;j++){
  cout<<"Enter my["<<i<<"]""["<<j<<"] = " ;
  cin>>my[i][j];
  }
}

 for(int i=0;i<3;i++){
  for(int j=0;j<3;j++){
    cout<<"my["<<i<<"]""["<<j<<"] = " <<my[i][j]<<endl;
  }
 }
  return  0;
}
 