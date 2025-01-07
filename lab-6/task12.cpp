#include<iostream>
#include<ctime>
#include<cstdlib>


int rollDice( ) ;
int isSumGreater(int roll1,int roll2);

using namespace std ;

int main(){
    int roll1 , roll2 ,res;

    srand(time(0)) ; 
    roll1 = rollDice() ;
    roll2 = rollDice() ;
    cout<<"DIce 1 :"<< roll1 << endl;
    cout<<"Dice 2 :"<< roll2 << endl;
    
    res = isSumGreater(roll1,roll2) ;
    res == 1 ? cout<<"true" : cout<<"false" ;
    return 0 ;
}

//  random number from 1 to 6 
int rollDice( ){
    int random ; 
    random = rand() % 7 ;
    return random ; 
}
// check whether the sum is greater than 7 or not
int isSumGreater(int roll1, int roll2){
     return (roll1+roll2) > 7 ? true : false ; 
}
