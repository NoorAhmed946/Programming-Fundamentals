#include<iostream>
#include<cstring>
using namespace std ;

char* toLowerCase(char* X){
       int i = 0 ;
         while (X[i] != 0 ){
           if(X[i] >= 'A' && X[i] <= 'Z' ){
              X[i] = X[i] + 32 ;
           }
           i++ ;
       }        
       return X;
} 
int main(){
    char x[100] ;
    cout<<"Enter String : " ;
    cin.getline(x,100) ;
    cout<< toLowerCase(x) ;    
    return 0 ;
}
