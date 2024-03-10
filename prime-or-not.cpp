#include<iostream>
using namespace std;
int main(){
int num;
cout<<"enter the number";
cin>>num;

if(num<=1)
 cout<<"the number is NOT PRIME";
 else{
bool isprime=true;
  for(int i=2;i*i<=num;i++){
    if(num%i==0){
      isprime=false;
      break;
    }
  }
 }
 if(isprime)
 cout<<"THE NUMBER IS PRIME";
 else
 cout<<"THE NUMBER IS NOT PRME";



return 0;
}