#include<iostream>
#include<cstring>
using namespace std ;
bool  contains (char* Y , char* Z ) ;
int main(){
    char str1[255],str2[255] ;
    int res ;
    cout<<"Enter a string " ;
    cin.getline(str1,255 ) ;
    cout<<" Enter letters you want to check : " ;
    cin>> str2 ;
    bool res =  contains(str1 , str2 )   ;
    res ==1 ?  cout<<"true " : cout<<"false" ;
    return 0 ;
}

bool contains (char* Y , char* Z ){
     
     for(int i = 0 ; i< strlen(Y) ; i++){
         if(Z[0] == Y[i]){
            for(int j = 1 ; j < strlen(Z) ; j++ ){
                 if(Z[j] != Y[i + j ]) {
                    return true ;
                 }
            }
         }
    }
    return false ;
}
