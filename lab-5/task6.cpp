#include <iostream>
using namespace std ;
int main() {
   int size , j= 1;
   cout<<"Enter Size of Array :" ;
   cin>> size ;
   int arr[size] ;
   int output[size] ;
   for(int i=0 ; i<size ; i++){
       cout<<"Enter array Element"<< i+1 <<" :" ;
       cin>> arr[i] ;
   }
    output[0] = arr[0] * arr[1] ;
   for(int i =1 ; i<4 ; i++){
    output[i] = arr[i-1] * arr[i+1] ;
   }  
   output[4] = arr[3] * arr[4] ;
   cout<<"Output Array is : " ;
   for(int i =0 ; i<5 ; i++){
    cout<< output[i] <<"," ;
   }

   
 


   return 0;
}