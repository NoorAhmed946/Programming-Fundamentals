#include<iostream>
int addFractions(int numer1 , int denom1 , int numer2 , int denom2 );
int substractFractions(int numer1 , int denom1 , int numer2 , int denom2 );
int divideFractions(int numer1 , int denom1 , int numer2 , int denom2 ) ;
int multiplyFractions(int numer1 , int denom1 , int numer2 , int denom2 );
int lowestFraction(int numerator , int denominator ) ;
using namespace std ;

int main() {
    int numer1 , denom1 , numer2 , denom2 , operation  ;
    char choice ;
    bool allSystem  = true ;
    bool system = true  ;
    bool sameFractions = true ; 

    while(allSystem){
    while(system  == true ){
    cout<<"-----------------------------------------------" <<endl ;
    cout<<"       Welcome to Fraction Calculation "  <<endl ;
    cout<<"-----------------------------------------------" <<endl ;
    
    cout<<"Please Enter your Fractions "<< endl ; 
    cout<<"Please Enter numerator for Fraction 1 : "  ;
    cin>> numer1 ;
    cout<<"Please Enter denominator for Fraction 1 :" ;
    cin>> denom1 ;
    cout<<"Please Enter numerator for Fraction 2:"  ;
    cin>> numer2 ;
    cout<<"Please Enter denominator for Fraction 2 : "  ;
    cin>> denom2 ;
    system = false ;
    }
    

    while (sameFractions == true){
    cout<<"Please Select Your Operation " <<endl ;
    cout<<"Press 1 for Addition " <<endl ; 
    cout<<"Press 2 for Substraction  " <<endl ; 
    cout<<"Press 3 for Divide " <<endl ; 
    cout<<"Press 4 for Multiply " <<endl ;
  
    cout<<"Enter your Operation = " ;
    cin>> operation ;

    switch(operation){
           case 1 : {
            addFractions(numer1, denom1 ,numer2,denom2 ) ;
            break ;
           }  
           case 2 : {
            substractFractions( numer1, denom1 ,numer2,denom2) ;
            break ;
           }
           case 3 : {
            divideFractions(numer1, denom1 ,numer2,denom2 ) ;
            break ;
           }
           case 4 : {
            multiplyFractions(numer1, denom1 ,numer2,denom2 ) ;
            break ;
           }
           default : {
            cout<<"Invalid Input " << endl ;
           }

        

    }
     cout<<endl ;
     cout<<"Do you want to continue for same fractions ?(N/Y) " ;
     cin>>choice ;
     if(choice == 'Y' || choice == 'y'){
            sameFractions = true ;
            system = false ;

    }
    else if(choice == 'N' || choice == 'n') {
            system = true ;
            sameFractions = false ; 
    }
    else {
        cout<<"Invalid Input ." ;
    }
    }
    }
    
    return 0;
}

//  Ans in  Lowest 
int lowestFraction(int numerator , int denominator ){
    int num1,num2, rem = 1 , gcd = 0 ; 
    if(numerator > denominator){
       num1 = numerator ;
       num2 = denominator ;
    }
    else{
       num1 = denominator ;
       num2 = numerator ;
    } 
    while(!(rem == 0) ) {
        rem = num1 % num2 ;
        if(rem==0){
            gcd = num2 ;
        }
    }
    cout<< numerator / gcd << " / " << denominator / gcd ;
}

// Function will add fractions
int addFractions(int numer1 , int denom1 , int numer2 , int denom2 ){
    int numerator = (numer1 * denom2 ) + (numer2 * denom1) ;
    int denominator = denom1 * denom2 ;      
    cout<<numer1<<" / "<<denom1<<" + "<< numer2 <<" / "<<denom2 <<" = " ;
    lowestFraction(numerator, denominator) ; 
}
// Function will substract fractions
int substractFractions(int numer1 , int denom1 , int numer2 , int denom2 ){
    int numerator = (numer1 * denom2 ) - (numer2 * denom1) ;
    int denominator = denom1 * denom2 ;      
     cout<<numer1<<" / "<<denom1<<" - "<< numer2 <<" / "<<denom2 <<" = " ;
     lowestFraction(numerator, denominator) ; 
}
// Function will divide fractions
int divideFractions(int numer1 , int denom1 , int numer2 , int denom2 ){
    int numerator = numer1 * denom2 ;
    int denominator = numer2 * denom1 ;      
     cout<<numer1<<" / "<<denom1<<" / "<< numer2 <<" / "<<denom2 <<" = " ; 
     lowestFraction(numerator, denominator) ;
}
// Function will multlipy fractions
int multiplyFractions(int numer1 , int denom1 , int numer2 , int denom2 ){
    int numerator =  numer1 * numer2 ;
    int denominator = denom1 * denom2 ;      
    cout<<numer1<<" / "<<denom1<<" * "<< numer2 <<" / "<<denom2 <<" = " ;
     lowestFraction(numerator, denominator) ;
     
}
