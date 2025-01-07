#include<iostream>
using namespace std ;
void push(int num , int arr[] , int &size) ;
int main(){
    int  arr[50] ,  num , size , currSize = 0;
    cout<<"Enter number of times you want to push : " ;
    cin>> size ;
     ;
    for(int i= 1 ; i<=size ; i++){
    cout<<"Enter Number you want to place in start " ;
    cin>> num ;

    push(num,arr , currSize) ; 
    
    }
    
    for(int i = 0 ; i<size ;i++){
        cout<<arr[i] << " ";
    }
     
    cout<<endl ; 
    return 0 ;
}

void push(int num , int arr[] , int &currSize) {
     arr[currSize] = num ;
     currSize++ ;
}     