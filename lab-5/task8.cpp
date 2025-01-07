#include<iostream>
using namespace std ;
int main(){
  string str ;
  bool flag  ;
  cout<<"Enter the String :" ;
  cin>>str ;
  cout<< endl ;
 
     
  
  if(str[0] >= '0' && str[0] <= '9'  ){
      flag = true ; 
      
     }
  else if(str[0] >= 'A' && str[0] <='Z'){
        flag = false ;
         
     } 
  else if(str[0] >= 'a' && str[0] <= 'z'){
        flag = false ;
      } 
     
    
   
  if(flag == true ){
    cout<<" User Enter Integer" ;
  }
  else {
    cout<<" User Enter String" ;
  }

  return 0 ;
}