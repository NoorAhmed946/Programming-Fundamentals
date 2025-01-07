#include<iostream>
using namespace std ;
string subString(string Z , int start , int end ){
       string res = "" ;
       while(start<=end){
          res = res + Z[start] ;
          start++ ; 
       }
       return res ; 
}
int main(){
    
    string str ;
    int start, end ;

    cout<<"Enter a string " ;
    getline(cin,str) ;
    cout<<"Enter starting point " ;
    cin>> start ;
    cout<<"Enter Ending point " ;
    cin>> end ;

    string res = subString(str ,start ,end) ;
    cout<< res ;
    return 0 ;
}
