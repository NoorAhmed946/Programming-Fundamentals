#include<iostream>
using namespace std ;
main(){
 
 float chance , i,p ; 
cout<< " Enter imposter count : " ;
cin >> i ;
cout << " Enter player count : " ;
cin >> p ;
chance = 100 * (i/p) ;
cout << "Chance of being an imposter : " << chance << "%" ;
 


} 