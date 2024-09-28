#include<iostream> 
#include<windows.h>
#include<string>
using namespace std ;
void printMenu();
void compareMarks(string  , float  , string , float );
void  calAggregate(string ,float ,float ,float  );
void printCentered(HANDLE hConsole, const string &text) ;
int main() {
   printMenu ();
  string name1 , name2 ;
 float matricMarks1 , interMarks1 , ecatMarks1,matricMarks2 , interMarks2 , ecatMarks2 ;
 cout<<"Name of Student 1 : " ; 
 cin >> name1 ;
 cout<<"Matric Marks : " ;
 cin >>matricMarks1  ;
 cout<<"Inter Marks : " ;
 cin >> interMarks1  ;
 cout<<"ECAT marks : " ;
 cin >> ecatMarks1   ; 
 cout << "\n";
 cout << "\n";

cout<< "Name of Student 2 : " ; 
 cin>> name2 ;
 cout<<"Matric Marks : " ;
 cin >>matricMarks2  ;
 cout<<"Inter Marks : " ;
 cin >> interMarks2  ;
 cout<<"ECAT marks : " ;
 cin >> ecatMarks2   ; 
   cout << "\n";
   cout << "\n";
   cout<<"Aggregate of Student 1 : " <<endl;
calAggregate (name1,matricMarks1,interMarks1,ecatMarks1 );
cout << "\n";
cout << "\n";
  cout<<"Aggregate of Student 2 : " <<endl;
calAggregate (name2,matricMarks2,interMarks2,ecatMarks2 );
cout << "\n";
cout << "\n";

     cout<<"Determination of Roll Numbers : "<<endl <<endl;
compareMarks(name1,ecatMarks1,name2,ecatMarks2) ;

} 

void printMenu () {
 HANDLE hConsole = GetStdHandle(STD_OUTPUT_HANDLE);


    SetConsoleTextAttribute(hConsole, 4); 
    printCentered(hConsole, "##     ##    ###    ##     ##  ######  ");

    SetConsoleTextAttribute(hConsole, 2); 
    printCentered(hConsole, "##     ##   ## ##   ###   ### ##    ## ");

    SetConsoleTextAttribute(hConsole, 6); 
    printCentered(hConsole, "##     ##  ##   ##  #### #### ##       ");

    SetConsoleTextAttribute(hConsole, 1); 
    printCentered(hConsole, "##     ## ##     ## ## ### ##  ######  ");

    SetConsoleTextAttribute(hConsole, 5); 
    printCentered(hConsole, "##     ## ######### ##     ##       ## ");
    printCentered(hConsole, "##     ## ##     ## ##     ## ##    ## ");
    printCentered(hConsole, " #######  ##     ## ##     ##  ######  ");

    
    SetConsoleTextAttribute(hConsole, 7);
    cout << "\n\n";

   
    printCentered(hConsole, "::  STUDENT REGISTRATION  ");
    printCentered(hConsole, "::  CALCULATE AGGREGATE   ");
    printCentered(hConsole, "::  FEE PAYMENT           ");
    printCentered(hConsole, "::  APPLICATION STATUS    ");
     cout << "\n\n";

}

void  calAggregate(string name,float matric,float inter,float ecat ) {
 float aggregate ;
 aggregate = ((matric / 1100 *100) * 0.30) + ((inter / 550 *100 ) * 0.30 ) + (( ecat / 400 * 100)* 0.40); 
 cout << "Aggregate : " << aggregate  <<endl <<endl <<endl ;   

} 

void compareMarks ( string std1 , float ecat1 , string std2, float ecat2) {
   if(ecat1 > ecat2) {
   cout << "Roll # 1 : "  << std1 <<endl;
   cout << "Roll # 2 : "  << std2 <<endl;  
}else  {
     cout << "Roll # 1 : "  << std2 <<endl;  
     cout << "Roll # 2 : "  << std1 <<endl;  
}
 
}

void printCentered(HANDLE hConsole, const string &text) {
   
    CONSOLE_SCREEN_BUFFER_INFO csbi;
    GetConsoleScreenBufferInfo(hConsole, &csbi);
    int consoleWidth = csbi.srWindow.Right - csbi.srWindow.Left + 1;

    int textLength = text.length();
    int startPos = (consoleWidth - textLength) / 2;

    COORD coord;
    coord.X = startPos;
    coord.Y = csbi.dwCursorPosition.Y;

    SetConsoleCursorPosition(hConsole, coord);
    cout << text << endl;
}


  



