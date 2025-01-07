#include <iostream>
#include <cstring>
using namespace std;
char *replace(char *X, char *Y, char *Z)
{
    int index = 0 ;
    int len1 = strlen(X);
    int len2 = strlen(Y);
    int len3 = strlen(Z) ;

    char* result = new char[len1 + len3 - len2 + 1 ];

    for (int i = 0; i < len1; i++)
    {    

        bool match = true;

        for (int j = 0; j < len2; j++ || i + j >= len1){
             if (X[i + j] != Y[j] || i + j >= len1)
            {
            match = false;
            }
        }

        if (match){
           for(int n = 0 ; Z[n] != '\0' ; n++ ){
           result[index++] =  Z[n] ;
            
           }
        i += len2 - 1;
        }
        else{
           result[index++] =  X[i] ;
        }
    }
    result[index] = '\0' ;
    return result;
}
int main()
{
    char str1[255], str2[255], str3[255];
    cout<<"Enter string 1 : " ;
    cin.getline(str1, 255);
    cout<<"Enter word you want to replace  :" ;
    cin.getline(str2, 255);
    cout<<"Enter word you want to place : " ;
    cin.getline(str3, 255);

    char *res = replace(str1, str2, str3);

    cout << res;

    return 0;
}