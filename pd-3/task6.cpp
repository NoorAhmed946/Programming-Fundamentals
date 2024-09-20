#include<iostream>
using namespace std ;
main(){
int pounds,cost,feet,calpound,calfeet;
cout<< " Enter size of fertilizer bag in pounds : " ;
cin>> pounds ;
cout << " Enter cost of bag : " ;
cin>> cost ;
cout << "Enter area in square feet covered by the bag : " ;
cin >> feet ;
calpound = cost / pounds ;
calfeet = cost / feet ;
cout << " Cost of fertilizer per pound : $" << calpound  <<endl ; 
cout << " Cost of fertilizing  per square foot : $" << calfeet <<endl ; 
 


} 