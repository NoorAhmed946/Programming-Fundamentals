#include<iostream>
using namespace std ;
string reverse(string input){
       int j = input.length() - 1 ; //get index of last letter
       char temp ; 
       for(int i = 0 ; i<input.length() ; i++ , j--) {
          if(i>j)
             break ;
          temp = input[i] ;  
          input[i] = input[j] ;
          input[j] = temp ;     
       }
       return input ;
} 
int main(){
    string input ;
    cout<<"Enter a string " ;
    cin>> input ;
    cout << reverse(input) ;
    return 0 ;
}