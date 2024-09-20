#include<iostream>
using namespace std ;
main(){
int ap,cp,at,ct ;
float per,tot,charity,rem ;
string mov ;
cout<<"Enter name of movie : " ;
cin>> mov ;
cout << " Enter adult ticket price : " ;
cin >> ap ;
cout << "Enter child ticket price : " ;
cin >> cp ;
cout << " Enter no.of adult tickets sold : " ;
cin >> at ;
cout << " Enter no.of adult tickets sold : " ;
cin >> ct ;
cout <<  " Enter percentage of amount to be donated to charity : " ;
cin >> per ;

tot = (ap * at ) + (cp *ct ) ;

rem = tot - (tot/10 ) ;

charity = tot - rem ;

cout << " Movie : " << mov  << endl;
cout << " Total amount generated from ticket sales : $" << tot <<endl ;
cout << " Donation to charity (" << per <<  "%) : $ "<< charity <<endl ;
cout << " Remaining amount after donation :  " <<rem <<endl ;   


} 