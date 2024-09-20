#include<iostream>
using namespace std ;
main(){
float veg,fru,totV,totF , total,vegetables,fruits   ;

cout << " Enter vegetable price per kg (in coins ) : " ;
cin >> veg ;
cout << " Enter fruit price per kg (in coins ) : " ;
cin >> fru ;


cout<< " Enter total kilograms of vegetables : " ;
cin >> vegetables ;
cout<< " Enter total kilograms of fruits : " ;
cin >> fruits ;

totV = (veg/1.94 ) * vegetables ;
totF = (fru/1.94) * fruits ;
 
total = totV + totF ;
 
cout<< " Total Earning in rupees (Rps) : " << total ;


} 