#include<iostream>
#include<cstring>
using namespace std ;
bool endsWith(char* Y , char* Z){
     bool isEqual = true ;
     int secLen = strlen(Z) -1 ;
     int firLen = strlen(Y) - 1;
     for(int i = secLen  ;i>=0 ; i-- , firLen--){
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
    char y[255] , z[255] ;
    cout<<"Enter string 1 " ;
    cin.getline(y,100) ;
    cout<<"Enter string 2 whether string 1 ends with string 2 or not " ;
    cin.getline(z,100) ;
    bool res =  endsWith(y,z) ; 

    res==1 ? cout<<"true" : cout<<"false" ;
    return 0 ;
}