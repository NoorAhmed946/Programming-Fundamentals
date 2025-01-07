#include<iostream>
#include<ctime>
#include<cstdlib>

int dataGenerator( ) ;
void findMean(int array[]) ;
void findMedian(int array[]) ;
void sortArray(int array[]) ;
int calFrequency(int array[] , int num) ;
void findMode(int array[] ) ;
void printStars(int stars) ;

using namespace std ;

int main(){
    int array[99] ;
    srand(time(0)) ;
    
    for(int i=0;i<99;i++){
        array[i] = dataGenerator() ;
       
    }

   findMean(array) ;
   findMedian(array) ;
   findMode(array) ;

    return 0;

}
// it will generate the data of 99 integers  
int dataGenerator(){
    return  (rand()%9)+1 ; 
}

// it will find the mean of data 
void findMean( int array[]){
     cout<<"************" <<endl ;
     cout<<"    Mean"  <<endl ;
     cout<<"************" <<endl ;
     double sum = 0;
     double mean ;
     for(int i=0;i<99;i++){
        sum = sum + array[i] ;
     }
     mean = sum / 99 ;
     cout<<"The mean is the average value of the data items.The mean is equal to the total"<< "of all the items divided by the number of data items(99).The mean value for " <<"this run is : " << sum << " / 99 = "<< mean << endl; 
    

}
// it will find the median 
void findMedian(int array[]){
     cout<<"************" <<endl ;
     cout<<"   Median"  <<endl ;
     cout<<"************" <<endl ;
     cout<<"The Unsorted Array of responses is "<<endl ;
     for(int i=0 ;i<99 ;i++){
        
        if(i%20 == 0){
            cout<<endl ;
        }
        cout<<array[i]<<" " ;
     }
     cout<<endl ;
     cout<<endl ;
     cout<<"The sorted Array of responses is "<<endl ;
     for(int i = 0; i<99 ; i++){
         for(int j =0 ; j<99 - i;j++){
            if(array[j] > array[j+1] ){
                int temp = array[j] ;
                array[j] = array[j+1] ;
                array[j+2] = temp ;
            }
         }
     }
     for(int i=0 ;i<99 ;i++){
        
        if(i%20 == 0){
            cout<<endl ;
        }
        cout<<array[i]<<" " ;
     }
       cout<<endl ;
      cout<<"The Median is 49 element of sorted 99 element array "<< endl ;
      cout<<"For this Run the median is "<< array[49] <<endl << endl ;

}

// this function will calculate frequency 

int calFrequency(int array[] , int num  ){
    int frequency = 0 ;
    for(int i =0 ;i<99;i++){
        if(array[i] == num)
           frequency++ ;
    }
    return frequency ;
}
// this function will print stars 
void printStars(int stars){
    for(int i = 1;i<=stars;i++){
        cout<<"*" ;
    }
}

// this function will find median 

void findMode( int array[]){
    cout<<"************" <<endl ;
    cout<<"    Mode"  <<endl ;
    cout<<"************" <<endl ;
    int maxFrequency = 0 , num;
    cout<<"Response \t" << "Frequency \t Histogram " <<endl;
    for(int i=1;i<=9;i++){
        int frequency = calFrequency(array,i); 
        cout<<i<<"\t\t"<< frequency <<"\t\t"  ;
        printStars(frequency) ;
        cout<<endl ;
        if(maxFrequency<frequency){
            maxFrequency = frequency ;
            num = i ;
        }
    }
    cout<<"The mode is the most frequent value ." << endl ;
    cout<<"For this run the mode is "<< num << " which occured "<< maxFrequency <<" times " <<endl;
}