#include<iostream>
#include<windows.h>
using namespace std ;
void possibleBonus(int , int) ;

main() {
  int pos1 , pos2 ;
  cout <<"Enter your Position : " ;
  cin>> pos1 ;
  cout <<"Enter your's Friend Position : " ;
  cin>> pos2 ;
  possibleBonus(pos1,pos2);

  
}
void possibleBonus(int p1 , int p2) {
  int posCheck ;
  posCheck = p1 + 6 ;
  if(posCheck >= p2) {
    cout<<"true" ;
  }
  else {
    cout << "false ";
  }
}