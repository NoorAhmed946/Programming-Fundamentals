#include<iostream>
#include<ctime>
#include<cstdlib>

int rollDice( ) ;
using namespace std ;

int main(){
    int number , one = 0, two = 0 ,three =0,four=0, five =0, six =0 ;
     srand(time(0)) ;
    for(int i=1 ; i<=50000 ; i++){
        number = rollDice() ;
        
        switch(number){
              case 1 : {
                one++ ;
                break ;
              }
              case 2 : {
                two++ ;
                break ;
              }
              case 3 : {
                three++ ;
                break ;
              }
              case 4 : {
                four++ ;
                break ;
              }
              case 5 : {
                five++ ;
                break ;
              }
              case 6 : {
                six++ ;
                break ;
              }
              

        }
    }    
    cout<<"Dice Value \t"<< " Frequency \t" <<" Probability " <<endl ;
    cout<<"1\t\t"<<one <<"\t\t" << (static_cast<double>(one)/50000 )  <<endl  ;
    cout<<"2\t\t"<<two <<"\t\t" << (static_cast<double>(two)/50000 )   <<endl ;
    cout<<"3\t\t"<<three <<"\t\t" << (static_cast<double>(three)/50000 )  <<endl  ;
    cout<<"4\t\t"<<four <<"\t\t" << (static_cast<double>(four)/50000 )  <<endl ;
    cout<<"5\t\t"<<five <<"\t\t" << (static_cast<double>(five)/50000 ) <<endl  ;
    cout<<"6\t\t"<<six <<"\t\t" << (static_cast<double>(six)/50000 ) <<endl  ;

    return 0 ;
}

//  random number from 1 to 6 
int rollDice( ){
    int random ; 
    random = (rand() % 6)+1 ;
    return random ; 
}

