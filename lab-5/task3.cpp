#include<iostream>
using namespace std ;
int main() {
    int arr[10] = {58,24,13,15,63,9,8,81,1,78}  , arr1[5] , arr2[5] ;
     for(int i = 0 ; i<5 ;  i++){
        arr1[i] = arr[i] ;
     }
      for(int i = 0 ; i<5 ;  i++){
        arr2[i] = arr[i+5] ;
     }
      for(int i = 0 ; i<5 ;  i++){
        cout<<  arr1[i] << ","  ;
     }
     cout<<endl ;
      for(int i = 0 ; i<5 ;  i++){
        cout<< arr2[i] << "," ;
     }
     return 0 ;
}