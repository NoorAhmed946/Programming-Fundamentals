#include<iostream>
#include<cstring>
using namespace std ;
string* tokenizer(char X[] , char Y , int &size) {
         
         size = 0 ; 
         int j=0 ;
        string  str = "" ;
        for(int i= 0 ;i< strlen(X); i++){
            if(X[i] == Y){
                size++ ;
            } 
        }
        size++ ;
        
        string* strArr = new string[size]  ;
      
      for(int i =0 ;i< strlen(X)  ; i++){
         if(X[i] != Y){
            str = str + X[i] ;
         } 
         else {
             strArr[j] = str ;
             j++ ;
             str = "" ;
         }
      }
       
    strArr[j] = str ;
     
    return strArr ;

}
int main(){
    char str[255];
    char ch ;
    int arrSize = 0;
    cout<<" Enter String with character : " ;
    cin.getline(str,255) ; 
    cout<<" Enter character " ;
    cin>> ch ;
    


    string  *arr =  tokenizer(str , ch , arrSize) ; 
    
    for(int i=0 ; i<arrSize ; i++){
        cout<< arr[i] << " " ;
    }   
    
     return 0 ; 

}