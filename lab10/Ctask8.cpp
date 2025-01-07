#include<iostream>
#include<cstring>
using namespace std ;
char* subString(char* Z , int start , int end ){
       static char res[100] ;
       int j= 0 ;
       while(start<=end){
           res[j] = Z[start] ;
           j++ ;
           start++ ; 
       }
       res[j] = '\0' ;
       return res ; 
}
int main(){
    char Z[100] ;
    int start,end ;
    cout<<"Enter string " ;
    cin.getline(Z,100) ;
    cout<<" enter starting index " ;
    cin>> start ;
    cout<<"Enter endind index " ;
    cin>> end ;
    
    char* result =  subString(Z,start,end) ;
    cout<< result ;
    return 0 ;
}