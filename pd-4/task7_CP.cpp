#include<iostream> 
using namespace std ;
void flowerPrice (int,int,int) ;
main() {
 
  int calRedRose , calWhiteRose , calTulips ;
  cout<<" Red roses : " ;
  cin>> calRedRose ;
   cout<<" White Roses : " ;
  cin>> calWhiteRose ;
   cout<<" Tulips  : " ;
  cin>> calTulips ;
  
  flowerPrice(calRedRose , calWhiteRose , calTulips ) ;

}

void flowerPrice ( int calRed , int calWhite , int calTul ) {
float redRose , whiteRose , tulips ;
float totRed , totWhite, totTul ,totalPrice , disPrice ;
redRose = 2.00 ;
whiteRose = 4.10 ;
tulips = 2.50 ;
 totRed = calRed * redRose ;    
 totWhite = calWhite * whiteRose ;    
 totTul = calTul * tulips ;
 totalPrice = totRed + totWhite + totTul ;
 if(totalPrice > 200 ) {
  disPrice = totalPrice - ( totalPrice * 0.20 ) ;
  cout<<" Original Price : " << totalPrice ;
  cout<< " Price after discount : "<<disPrice ;
}  
else {
   cout<<" Original Price : " << totalPrice <<endl ;
   cout<< " No discount Applied. " ; 
}  


}