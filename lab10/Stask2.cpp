#include<iostream>
using namespace std ;
bool endsWith(string Y , string Z){
     bool isEqual = true ;
     int secLen = Z.length() - 1 ;
     int firLen = Y.length() - 1 ;
     for(int i = secLen ;i>0 ; i-- , firLen--){
         if(Z[i] != Y[firLen]){
            isEqual =  false ;
            break ; 
         } 
     }  
    if(isEqual)
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
    endsWith(str1,str2) ? cout<<"true " : cout<<"false" ; 
    return 0 ;
}