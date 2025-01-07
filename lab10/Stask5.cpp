#include<iostream>
using namespace std ;
string replace(string X , string Y , string Z) {
       
       int len1 = X.length() ;
       int len2 = Y.length() ;
       string res ="" ;
    
       for(int i = 0 ; i<len1 ; i++){

           bool match = true  ; 

           for(int j= 0 ; j<len2 ; j++){
               
              if( X[i + j] != Y[j]  || i + j >= len1){
                 match = false ;
                 
              }
           }

           if(match){
             res += Z ;
            i += len2 -1 ; 
           }
           else {
             res += X[i] ;
           }

          
        }
        return  res ;
      
       
}
int main(){
    string str1,str2,str3 ;
    cout<<"Enter string : " ;
    getline(cin,str1) ;
    cout<<"Enter string you want to replace : " ;
    cin>>str2 ;
    cout<<"Enter string you want to place : " ;
    cin>>str3 ;
    string  res = replace(str1, str2 ,str3) ;
    cout<< res ;

    return 0 ;
} 