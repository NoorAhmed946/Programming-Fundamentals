#include<iostream>
using namespace std ;
main(){
int num,digit ,sum,first,sec,third,four ;

cout<<"Enter 4 digit number : " ;
cin >> num ;
sum = 0;
first  = num % 10 ;
sec =  (num/10) % 10 ;
third =  (num/100) % 10 ;
four =   (num/1000) % 10 ;
sum = first + sec + third + four ;
 
cout << " Sum of individual digits is : " << sum ;  


} 