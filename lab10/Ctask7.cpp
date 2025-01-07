#include<iostream>
#include<cstring>
using namespace std ;
char* removeSpaces (char* Z){
      static char res[100] ;
      int j = 0 ;
       for(int i = 0 ; i< strlen(Z) ; i++ ){
           if(Z[i] != static_cast<char>(32)){
             res[j] = Z[i] ;
             j++ ;
           }
       }
       res[j ] = '\0' ;
       return res ;
} 
int main(){
    char Z[100] ;
    cout<<"Enter a string " ;
    cin.getline(Z,100) ;
    char* res =  removeSpaces(Z) ;
    cout<< res ; 
    return 0 ;
}