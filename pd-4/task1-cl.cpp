#include<iostream>
#include<windows.h>
using namespace std ;
void gotoxy (int x,int y) {
    COORD c ;
    c.X = x ;
    c.Y = y ;
    SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE),c);
}

int main() {
   cout<<"Test" ;


   gotoxy(15,15);
   cout<<"M.Noor Ahmed"; 
   
}
