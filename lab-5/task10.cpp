#include <iostream>
using namespace std ;
int main(){
     int arr[10] ,  even[10] , odd[10] ,temp ;
     for(int i= 0 ; i<10 ; i++){
        even[i] = 0 ;
     }
     for(int i=0  ; i<10 ; i++){
        odd[i] = 0 ;
     }
     
     for(int i=0; i<10 ; i++){
      cout<<"Enter Array elements "<<i+1 <<  " : " ;
        cin>>arr[i] ;
     }

 for(int i =0 ; i< 10 ; i++)
 {
   for(int j = 0 ; j< 10-i ; j++)
   {
      if(arr[j] > arr[j+1])
      {
         temp = arr[j] ;
         arr[j] = arr[j+1] ;
         arr[j+1] = temp ;
      }
   }
 }

     for(int i = 0 ; i<10 ; i++){
        if(arr[i] % 2 == 0)
         {
          even[i] = arr[i] ;      
         }
        else
        {
         odd[i] = arr[i] ;
        }  

     }
   
     for(int i =0 ; i<10 ; i++)
      {
       if(even[i] !=0 )
       {
        cout<< even[i] <<"," ;
       }
      }
      for(int i =0 ; i<10 ; i++)
      {
         if(odd[i] !=0 )
         {
           cout<<odd[i] <<"," ;
         }
      } 


    return 0 ;
}