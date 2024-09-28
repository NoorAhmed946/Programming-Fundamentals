#include<iostream>
#include<windows.h>
using namespace std ;
void reverse(string) ;

main() {
   string word ;
   cout<<"Enter 'True' or 'False' : " ;
   cin >> word ;
   reverse(word);

}
void reverse ( string word){
 if(word == "True" || word == "true") {
  cout<<"False";
 }
 else if(word == "False" || word == "false") {
  cout<<"True" ;
 }
 else {
  cout<< "Invalid input ";
 }

}