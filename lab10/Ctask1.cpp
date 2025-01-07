#include <iostream> 
#include<cstring>
using namespace std ;
bool startsWith(char* Y, char* Z) {
     for(int i = 0 ;i<strlen(Z); i++){
          if(Y[i] != Z[i])
             return false ;
     }
     return true ;
}
int main(){
    char y[255] , z[255] ;
    cout<<"Enter string 1 " ;
    cin.getline(y,255) ;
    cout<<"Enter string 2 to check string 1 starts with string 2 or not " ;
    cin.getline(z,255) ;

    bool res =  startsWith(y,z) ;
    res ==1 ? cout<<"true" : cout<<"false" ;
     return 0 ;
}