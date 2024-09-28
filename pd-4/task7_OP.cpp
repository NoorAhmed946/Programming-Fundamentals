#include<iostream>
#include<windows.h>
using namespace std ;
void gotoxy(int,int) ;
void maze ();
void movePlayer(int,int ) ;
main() {
  int x , y;
  x=3 ;
  y=1 ;
   system("cls");
   maze() ;
  while(true){
    movePlayer(x,y);
    y += 1 ;
    if(y == 8){
      y =2 ;
    }
  }
   

}
void movePlayer (int x, int y ){
   gotoxy(x,y);
   cout<<"P" ;
   Sleep(100);
   gotoxy(x,y);
   cout<< " " ;
   
   
 
}
void gotoxy (int x,int y) {
    COORD c ;
    c.X = x ;
    c.Y = y ;
    SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE),c);
}
void maze () {
  cout<< "###################" <<endl ;
  cout<< "#                 #" <<endl;
  cout<< "#                 #" <<endl;
  cout<< "#                 #" <<endl;
  cout<< "#                 #" <<endl;
  cout<< "#                 #" <<endl;
  cout<< "#                 #" <<endl;
  cout<< "#                 #" <<endl;
  cout<< "###################" <<endl;
}