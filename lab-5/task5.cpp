#include<iostream> 
using namespace std ;
int main(){
    int i ;
    cout<<"Enter Size of Array :" ;
    cin>> i ;
    int arr[i] ;
    
    for(int j=0 ; j<i ; j++) {
        cout<<"Enter array Element "<<j+1 << " :" ;
        cin>> arr[j] ;
    }
    cout<<"Elements of array that appear once in array : " ;
    for(int j=0 ; j<i ; j++){
          bool flag = true ;        
  
         for(int k = 0 ; k<i ; k++ ){
           if(j==k){
            continue ;
           } 
           if(arr[j] == arr[k]){
            
            flag = false ;
            break ;            

           }
           
         }
         if(flag == true){
            cout<< arr[j] << ",";
         }
    
    }
    
   

    return 0 ;
}