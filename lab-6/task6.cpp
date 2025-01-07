#include<iostream>
using namespace std ;
int findMax(int operand1 ,int operand2) ;
int performOperation(long operand1 , long operand2, long operation) ;
long getValidinput( int number ) ;

int main(){
    long operand1 , operand2 ;
    char operation ;
    bool isValidoperator = false   ;

    operand1 =  getValidinput(1) ;
    operand2 =  getValidinput(2) ;
    
    
    while(isValidoperator == false){
          
          cout<<"Enter operation you want to perform (+,-,/,*,M):" ;
          cin>> operation ;
          if(operation == '+'|| operation == '-'||operation == '*'||operation == '/'||operation == 'M'){
            isValidoperator = true ;
          }
          else{
            cout<<"Enter Valid Operator " <<endl ;
          }

    } 
    
    long result = performOperation(operand1 , operand2 , operation );
    cout<< "The result is "<<  result ;
    
    return 0 ;
}
// it will assure that data is numeric 
long getValidinput( int number ){
    long num ;
    char input[50] ;
    bool isNumber = false ;

    while(isNumber == false){
    cout<<"Enter Number "<< number << ":";
    cin>>input ;
    cin.ignore(100,'\n') ;
    
    bool isValid = true ;
    for(int i =0 ; input[i] !='\0' ; i++ ){
       if(!(input[i]>='0' && input[i] <='9') && !(input[i] == '-') ){
         isValid = false ;
         break ;
       }
    } 
    if(isValid == true){
      num = atol(input) ;
      isNumber = true ;
      return num ;
    }
  }
}

// find Max function 
int findMax(int operand1 ,int operand2){
     if(operand1 > operand2){
        return 0 ;
     }
     else{
        return 1 ; 
     } 
       
}

// this function will perform operations 
int performOperation(long operand1 , long operand2, long operation){
    switch(operation) {
          case '+': {
            long res = operand1 + operand2;
            return res ;
            break ;
          }
          case '-' :{
            long res =operand1 - operand2 ;
            return res ;
            break ;
          }
          case '/' :{
            long res = operand1 / operand2 ;
            return res ;
            break ;
          }
          case '*' : {
            long res = operand1 * operand2 ;
            return res ;
            break ;
          }
          case 'M':{
            return findMax(operand1,operand2) ;

          }

        

    }   
}