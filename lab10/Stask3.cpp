#include<iostream>
using namespace std ;
string toLowerCase(string X){
       for(int i= 0 ; i<X.length() ; i++){
           if(X[i] >= 'A' && X[i] <= 'Z' ){
              X[i] = X[i] + 32 ;
           }
       }        
       return X;
} 
int main(){
     string str ;
     cout<<"Enter String : " ;
     getline(cin,str) ; 
     cout<< toLowerCase(str) ;
    return 0;
}