#include<iostream>
using namespace std ;
int main(){
  string str ;
  bool isString = false  ;

  cout<<"Enter the String :" ;
  cin>>str ;
     
  for(int i =0 ; i<str.length()  ;i++ )
  {
      if(str[i] >='A' && str[i] <='Z' || str[i] >='a' && str[i] <='z' )
      {
        isString = false ;
        break ;
      }

      if(str[i] == '.' )
      {
        isString = true ;
        break ;
      }
  
  }
     
    
   
  if(isString == false )
  {
    cout<<" User Entered Value is not Double" ;
  }
  else 
  {
    cout<<" User Entered value is Double " ;
  }   
 
 
 return 0;
}