#include <iostream >
using namespace std ;
main(){
 int age , moved ,avg,house  ;
 cout << "Enter the person's age : " ;
 cin >> age ;
 cout << " Enter the no.of times they've moved : " ;
 cin>> moved ;
 house = moved + 1 ;
 avg = age / house ;
 cout<< "Average no.of years lived in the same house : " << avg ;

}