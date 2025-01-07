#include<iostream> 
using namespace std ;
int main() {
    int arr[5] , sum = 0 , prod = 1 ;
    for(int i =0; i<5 ; i++){
        cout<<"Enter Number " << i+1 <<" :" ;
        cin>> arr[i] ;
    }
    for(int i=0 ; i<5 ; i++){
      sum = sum + arr[i] ;
    }
     for(int i=0 ; i<5 ; i++){
      prod = prod * arr[i] ;
    }
    cout<<"Sum of all elements is :" << sum <<endl ;
    cout<<"Product of all elements is :" << prod <<endl ;
return 0 ;
}
