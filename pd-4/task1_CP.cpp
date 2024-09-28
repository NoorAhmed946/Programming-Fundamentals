#include<iostream>
#include<windows.h>
using namespace std ;
void equalNum(int,int) ;

main() {
    int num1 , num2 ;
  cout<<"Enter 1st Number : " ;
  cin >> num1 ;
  cout<<"Enter 2nd Number : " ;
  cin >> num2 ;
  equalNum(num1,num2);


}
void equalNum ( int n1,int n2){
 if(n1 == n2) {
  cout<<"True";
 }
 else{
  cout<<"False" ;
 }

}