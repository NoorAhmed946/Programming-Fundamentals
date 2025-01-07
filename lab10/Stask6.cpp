#include <iostream>
using namespace std ;
bool contains (string Y , string Z ){
     
     for(int i = 0 ; i< Y.length() ; i++){
         if(Z[0] == Y[i]){
            for(int j = 1 ; j < Z.length() ; j++ ){
                 if(Z[j] != Y[i + j ]) {
                    return false ;
                 }
            }
         }
    }
    return true ;
}
int main(){
     string str1,str2 ;
      cout<<"Enter a string : " ;
      getline(cin, str1) ;
      cout<<"Enter the word you want to check " ;
      cin>> str2 ;
      contains(str1 , str2) ? cout<<"true " : cout << "false " ; 

    return 0 ;
}