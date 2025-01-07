#include<iostream>
#include<cstring>
using namespace std ;
bool isBalanced(char input[]) ;
int main(){
    char input[50] ;
    cout<<"Enter elements to check whether the array is Balnced or not : " ;
    cin.getline(input,50) ;
    
    isBalanced(input) ? cout<<"true" : cout<<"false" ; // function call to check array

    return 0 ;
}


bool isBalanced(char input[]){ // function body 
    bool balanced = true ;
    int j = strlen(input) - 1 ; // get iast element index 
     for(int i = 0 ; input[i] != '\0' ; i++){
        if(input[i] == '{' ){
           if( !(input[i+1] == '}' || input[j-i] == '}') ){
                return  false ;
           }   
        }
        else if(input[i] == '(' ){
           if( !(input[i+1] == ')' || input[j-i] == ')') )
               return  false ;
        }
        else if(input[i] == '[' ){
           if( !(input[i+1] == ']' || input[j-i] == ']') )
              return  false ;
        }
     }

    return balanced ; 
}