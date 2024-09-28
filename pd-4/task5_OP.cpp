#include<iostream>
#include<windows.h>
using namespace std ;
void gotoxy(int,int) ;

main() {
  gotoxy(60,20);
  cout<<"MUHAMMAD NOOR AHMED";

   

}
void gotoxy(int x, int y ){
  COORD c ;
  c.X = x ;
  c.Y = y ;
  SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), c);
}
