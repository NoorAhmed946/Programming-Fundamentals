#include<iostream>
using namespace std ;
string* tokenizer(string X , char Y ,int &size) {
         
         size = 0 ; 
         int j=0 ;
        string  str = "" ;
        for(int i= 0 ;i< X.length() ; i++){
            if(X[i] == Y){
                size++ ;
            } 
        }
        size++ ;
        
        string* array = new string[size ] ;
      
      for(int i =0 ;i<X.length()  ; i++){
         if(X[i] != Y){
            str = str + X[i] ;
         } 
         else {
             array[j] = str ;
             j++ ;
             str = "" ;
         }
      }
       
    array[j] = str ;
    
    
   
      return array ;

}

int main(){

    string str ;
    char ch ;
    int arrSize = 0 ;
    cout<<" Enter String with character : " ;
    cin>> str ;
    cout<<" Enter character " ;
    cin>> ch ;
    string *arr =  tokenizer(str , ch ,arrSize) ;  
     for(int i=0 ; i<arrSize ; i++){
        cout<< arr[i] << " " ;
    }    

    return 0 ;
}
