#include<iostream>
using namespace std;
int main(){
  for(int i=0;i<5;i++){
    for(int j=i;j<5;j++){
      cout<<"   ";
      }
        for(int k=0;k<=i;k++){
        cout<<" * ";  
    }
            for(int m=0;m<i;m++){
            cout<<" * ";
    }
    cout<<endl; 
    
  }
  cout<<endl;
  for(int i=0;i<5;i++){
    for(int j=0;j<i;j++){
      cout<<"   ";
      }
        for(int k=0;k<=5;k++){
        cout<<" * ";  
    }
            for(int m=5;m>1;m--){
            cout<<" * ";
    }
    cout<<endl; 
  }

 
  return 0;
}