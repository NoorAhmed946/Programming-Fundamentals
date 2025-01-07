#include<iostream>
using namespace std ;
void rotate(int arr[] ,int &size ,int times ){
     int end = size - 1 ;
     for(int i = 0 ; i< times ; i++){
        int temp =  arr[0] ;
        for(int j = 0; j<size ; j++){
            arr[j] = arr[j+1] ;
        }
        arr[end] = temp ;
     } 
} 
int main(){
    int size  , times;
    cout<<"Enter size of array : " ;
    cin>> size ;
    int arr[size] ;
    for(int i = 0 ; i< size ; i++){
        cout<<"Enter Element "<< i+1 << " :";
        cin>> arr[i] ;
    }
    cout<<"Number of Rotations : ";
    cin>> times ;

    rotate( arr , size , times );

    for(int i = 0 ;i<size ; i++){
        cout<< arr[i] <<  " " ;
    }

    return 0 ;
}