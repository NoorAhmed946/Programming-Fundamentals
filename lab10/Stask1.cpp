#include<iostream>
using namespace std ;
bool startsWith(string Y , string Z) {
     string firstWord = "" ;
     for(int i=0 ;i<Y.length()-1  ; i++){
         if(Y[i] == static_cast<char>(32))
            break ;
         else 
           firstWord = firstWord + Y[i] ;
     }

     if(firstWord == Z)
        return true ;
     else 
        return false ; 
}

int main(){
    
    string str1,str2 ;
    cout<<"Enter string 1 :" ;
    getline(cin,str1) ;
    cout<<"Enter string 2 :" ;
    cin>> str2 ;
    startsWith(str1 , str2) ? cout<<"true" : cout<<"false " ;
    return 0 ;
}