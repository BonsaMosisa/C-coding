#include<iostream>
using namespace std;
int main(){
 int i;
 int y=0;
 int arr[5];
     
 for(int i=0;i<5;i++){
 cout<<"enter array 5 elements :";
 cin>>arr[i];
 }  
 for(int i=0;i<5;i++){
   

    if(arr[i]%2==0)
    cout<<"the even numbers is " <<arr[i] <<endl;
    if(arr[i]%2!=0)
    cout<<"the odd numbers is " <<arr[i] <<" " <<endl;
    
   
 }
   
    


 

  return 0;
}