#include<iostream> 
using namespace std ;
void pet (int) ;
main() {
 int holidays ;
 cout <<"Enter no.of Hoidays :" ;
 cin >> holidays ;
 pet (holidays ) ;
}

void pet (int holidays ) {
int workingDays , timeForGames,difFromNor ,hours , min  ;
workingDays = 365 - holidays ;
timeForGames = (workingDays * 63 + holidays * 127 ) ;
if(timeForGames < 30000 ) {
 difFromNor = 30000 - timeForGames ;
 hours =  difFromNor / 60 ;
 min =  difFromNor % 60 ;
 cout<<"Tom sleeps Well " <<endl ;
 cout <<hours <<" hours and " << min <<" minutes less for play " ;
} 
else  {
difFromNor =timeForGames - 30000 ; 
hours =  difFromNor / 60 ;
min =  difFromNor % 60 ;
cout <<"Tom will run away " <<endl ;
cout <<hours <<"hours and"<< min << " minutes for play"  ;    
} 
 
  



}