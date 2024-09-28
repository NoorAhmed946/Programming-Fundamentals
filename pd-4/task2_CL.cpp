#include<iostream>
#include<windows.h>
using namespace std ;
void gotoxy(int,int) ;
void printH();
void printA();
void printS();
void printN();

main() {
  gotoxy(60,20);
  printH();
  gotoxy(60,21);
  printA();
  gotoxy(60,22);
  printS();
  gotoxy(60,23);
  printS();
  gotoxy(60,24);
  printA();
  gotoxy(60,25);
  printN();
   
   

}
void gotoxy(int x, int y ){
  COORD c ;
  c.X = x ;
  c.Y = y ;
  SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), c);
}
void printH() {
  cout<<"H";
}
void printA() {
  cout<<"A";
}
void printS() {
  cout<<"S";
}


void printN() {
  cout<<"N";
}