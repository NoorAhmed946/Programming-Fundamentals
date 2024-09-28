#include<iostream>
#include<windows.h>
using namespace std ;
void longestTime(float,float) ;

main() {
float hours, min ;
cout<<"Enter the no.of Hours : ";
cin>> hours ;
cout<<"Enter the no.of minutes : ";
cin>> min ;
longestTime(hours,min);
  
}
void longestTime(float hours , float min) {
 float calHours ;
float calMin ;
calHours = hours * 60 * 60 ;
calMin = min * 60 ;
if(calHours > calMin) {
  cout << hours ;
}
else {
  cout << min ;
}
}