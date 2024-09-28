#include<iostream>
#include<windows.h>
using namespace std ;
void gotoxy(int,int) ;
void maze ();
void movePlayer(int,int ) ;
main() {
  int x , y ;
  x = y = 4 ;
   system("cls");
   maze() ;
   movePlayer(x,y);
   

}
void movePlayer (int x, int y ){
   gotoxy(x,y);
   cout<<"P" ;
   Sleep(100);
   gotoxy(x,y);
   cout<<" ";
 
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