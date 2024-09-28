#include<iostream> 
using namespace std ;
void checkDays(int,int) ;
main() {
int people , tp ;
cout << "  No.of people in household : " ;
cin >> people ;
cout << "  No.of rolls of TP : " ;
cin >> tp ;
checkDays (people , tp );


}

void checkDays(int people ,int tp ) {
  int sheets , totTP , days ;
 sheets = people * 57 ;
 totTP = tp * 500 ;
 days =  totTP / sheets ; 
 if ( days > 14 ) {
  cout << " Your TP will last " << days << " days, no need to panic! " ;  

}
else {
 cout << " Your TP will only last " << days << " days ,buy more! " ; 
}


  
} 
 
  



