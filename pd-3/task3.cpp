#include<iostream>
using namespace std ;
main(){
 float v1,a,t,v2 ;
 cout <<"enter initial velocity(m/s) : ";
 cin >> v1 ;
 cout <<"enter acceleration (m/s^2)  : ";
 cin >> a ;
 cout <<"Enter time (s)" ;
 cin>> t ;
 v2 = (a*t ) + v1 ;
 cout<< "final velocity is : " << v2 ;
 


} 