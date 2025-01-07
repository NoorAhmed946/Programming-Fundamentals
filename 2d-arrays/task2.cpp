#include<iostream>
using namespace std ;
void push(int num , int arr[] , int &size) ;
int main(){
    int  num , size;
    cout<<"Enter number of times you want to push : " ;
    cin>> size ;
    int arr[size] ;
    for(int i= 1 ; i<=size ; i++){
    cout<<"Enter Number you want to place in start " ;
    cin>> num ;

    push(num,arr , size) ; 
    }
    
    for(int i = 0 ; i<size ;i++){
        cout<<arr[i] << " ";
    }
     
    cout<<endl ; 
    return 0 ;
}

void push(int num , int arr[] , int &size) {
     for(int i = size ; i>0 ; i--){
        arr[i] = arr[i-1] ;
     }
     arr[0] = num  ;
}     