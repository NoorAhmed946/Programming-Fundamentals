#include<iostream>
#include<windows.h>
using namespace std ;
void issueChallan(float) ;

main() {
  float speed ;
  cout<<"Speed : " ;
  cin>> speed ;
  issueChallan(speed);
  
}
void issueChallan(float speed) {
  if(speed <= 100 ){
    cout << "Perfect! You are going good ";
  }
  else {
    cout<<"HALT... YOU WILL BE CHALLENGED!!!.";
  }
}