#include <iostream> 
using namespace std ;
main(){
int n,w,h,walls ;
cout<< "No.of square meters you can paint : ";
cin>> n ;
cout<< "Width of the single wall(in meters) : ";
cin>> w ;
cout << "Height of the single ball : ";
cin>> h ;
walls = n / (w*h) ;
cout<< " No.of walls you can paint : " << walls ;



}