#include<iostream>
using namespace std ;
string removeSpaces (string Z){
       string res = "" ; 
       for(int i = 0 ; i< Z.length() ; i++ ){
           if(Z[i] != static_cast<char>(32)){
             res = res + Z[i] ;
           }
       }
       return res ;
} 
int main(){
    string str ;
     cout<<" Enter String " ;
     getline(cin,str) ;
     string res = removeSpaces(str) ;    
     cout<< res ;
    return 0 ;
}