#include<iostream>
using namespace std ;
int main(){
   int i , min , max; 
   cout<<"Enter Size of array " ;
   cin>>i ;
   int arr[i] ;
   for(int j = 0 ; j<i ; j++){
     cout<<"Enter array elements : " ;
     cin>>arr[j] ; 
   }
    min = arr[0] ;
   for(int j= 1 ; j<i ; j++){
     if(min > arr[j]){
        min = arr[j] ;
     } 
   }
   max = arr[0] ;
    for(int j= 1 ; j<i ; j++){
     if(max < arr[j]){
        max = arr[j] ;
     } 
   }
   cout<<"Smallest Element : " << min <<endl ;
    cout<<"Largest Element : " << max <<endl ;

   return 0 ; 
}