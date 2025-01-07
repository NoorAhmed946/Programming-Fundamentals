#include <iostream>
using namespace std ;

int main() { 
int choice1,choice2 ;
string course1,course2,course3,course4,course5 , course , userNameO , passwordO , userName , password ; 
int cd1,cd2,cd3,cd4,cd5 , cd ,checkCourse = 0, countCourse =0 ,checkNoCourse = 0 ;
char grade1 , grade2 , grade3 , grade4 , grade5 , grade ;
float GPA = 0,totPoint = 0 , totCd = 0 ,pointA,pointB ,pointC , pointD , pointF;
bool flag = false , flag1 = false , flag2 = false ;
course1 = course2 = course3 =course4 =course5 = "NV" ;
cd1 = cd2 = cd3 = cd4 = cd5 = -1 ; 
userNameO = "admin" ;
passwordO = "admin123" ;

while(flag == false) {
cout<<"*************************************************" << endl ;
cout<<"                GPA Calcualtion System "           <<endl ;
cout<<"*************************************************" <<endl ;
cout<< endl ;
cout<< endl ;
cout<<"1. Log in as Admin " <<endl ;
cout<<"2. Proceed as Student" <<endl ;
cout<<"0. Exit    "         <<endl ;
cout<< endl ;
cout<< endl ;

cout<<"*************************************************" <<endl ;
cout<<"Enter input : " ;
cin>>choice1 ;
flag1 = false ;
flag2 = false ;


switch (choice1)
// Admin Menu 
{
 case 1 : 
 {  
   cout<<"Enter Username :" ;
   cin>> userName ;
   cout<<"Enter Password :" ;
   cin>> password ;

   if(userName == userNameO && password == passwordO){ 
  while(flag1 == false){ 
  cout<<"***************************************************************" << endl ;
  cout<<"                GPA Calcualtion System (Admin)  "           <<endl ;
  cout<<"***************************************************************" <<endl ;
  cout<<"1. Add a course " <<endl;
  cout<<"2. Edit a course " <<endl ;
  cout<<"3. Delete a course" <<endl ;
  cout<<"4. Display all courses" <<endl ;
  cout<<"0. Exit"  <<endl ;
  cout<<"*************************************************" <<endl ;
  cout<<"Enter input :" <<endl ;
  cin>> choice2  ;
  

  switch(choice2){
    //Add a course
   case 1 : {
    cout<<"Enter Course Name :" ;
    cin>>course ;
    cout<<"Enter Credit Hours :" ;
    cin>> cd ;
    if(course1 == "NV") {
       course1 = course ;
       cd1 = cd ;
       countCourse = countCourse + 1 ;
    }
    else if(course2 == "NV") {
       course2 = course ;
       cd2 = cd ;
        countCourse = countCourse + 1 ;
    } 
    else if(course3 == "NV") {
       course3 = course ;
       cd3 = cd ;
        countCourse = countCourse + 1 ;
    } 
    else if(course4 == "NV") {
       course4 = course ;
       cd4 = cd ;
        countCourse = countCourse + 1 ;
    } 
    else if(course5 == "NV") {
       course5 = course ;
       cd5 = cd ;
        countCourse = countCourse + 1 ;
    } 
    else {
        cout<<"Memory is Full " <<endl ;
    }   

    break ;
   }
   // Edit a course 
    case 2 : {
     cout<<"Enter Course Name to edit : " <<endl ;
     cin>> course ;
     cout<<"Enter new credit hours :" <<endl ;
     cin>> cd ;
     if(course1 == course ){
        cd1 = cd ;
        cout<<endl ;
        cout<<endl ;
        cout<<"Course updated successfully! " <<endl ;
     }
     else if(course2 == course ){
        cd2 = cd ;
        cout<<endl ;
        cout<<endl ;
        cout<<"Course updated successfully! " <<endl ;
     } 
      else if(course3 == course ){
        cd3 = cd ;
        cout<<endl ;
        cout<<endl ;
        cout<<"Course updated successfully! " <<endl ;
     } 
      else if(course4 == course ){
        cd4 = cd ;
        cout<<endl ;
        cout<<endl ;
        cout<<"Course updated successfully! " <<endl ;
     } 
      else if(course5 == course ){
        cd5 = cd ;
        cout<<endl ;
        cout<<endl ;
        cout<<"Course updated successfully! " <<endl ;
     } 
     else {
          cout<<"Course not found!" <<endl ;
     }



    break ;
   }  
   //Delete a course 
    case 3 : {
    cout<<"Enter Course name you want to delete :" ;
    cin>> course ;
     if(course1 == course ){
        course1 = "NV" ;
        cd1 = -1;
        cout<<"Course deleted successfully!" <<endl ;
     }
     else if(course2 == course ){
        course2 = "NV" ;
        cd2 = -1;
        cout<<"Course deleted successfully!" <<endl ;
     }
      else if(course3 == course ){
        course3 = "NV" ;
        cd3 = -1;
        cout<<"Course deleted successfully!" <<endl ;
     }
      else if(course4 == course ){
        course4 = "NV" ;
        cd4 = -1;
        cout<<"Course deleted successfully!" <<endl ;
     }
      else if(course5 == course ){
        course5 = "NV" ;
        cd5 = -1;
        cout<<"Course deleted successfully!" <<endl ;
     }
     else {
        cout<<" Course Not Found " <<endl ;
     }


    break ;
   }  
   // Display All courses
    case 4 : { 
       if(countCourse != 0) {

       
        cout<<"Course Name"<<"\t\t"<<"Credit Hours" << endl ;
        if(course1 != "NV"){
         cout<<course1 <<"\t\t\t" << cd1 <<endl ;   
        }
        if(course2 != "NV"){
         cout<<course2 <<"\t\t\t" << cd2 <<endl ;   
        }
        if(course3 != "NV"){
         cout<<course3 <<"\t\t\t" << cd3 <<endl ;   
        }
        if(course4 != "NV"){
         cout<<course4 <<"\t\t\t" << cd4 <<endl ;   
        }
        if(course5 != "NV"){
         cout<<course5 <<"\t\t\t" << cd5 <<endl ;   
        }
       }
       else {
         cout<<"No course has been Added " <<endl ; 
       }
    break ;
   }  
    case 0 : {
     //   cout<<"Program Closed Successfully" <<endl ;
        flag1 = true ;

    break ;
   }   
   default : {
    cout<<"Invalid Input" <<endl ;

   } 




  }
  
   }

 }
 else {
   cout<<"Invalid Username or Password " << endl ;
 }



    break ; 
 }
 // Main switch Student Menu
  case 2 : {  
   while(flag2 == false ){
 cout<<"************************************************************" << endl ;
 cout<<"             GPA Calcualtion System (Student)  "           <<endl ;
 cout<<"************************************************************" <<endl ;
cout<<endl ;
cout<<endl ;
cout<<"1. View all courses " <<endl ;
cout<<"2. Enter grades and calculate semester GPA " <<endl ;
cout<<"0. Exit" <<endl ;
cout<<endl ; 
cout<<endl ;
cout<<"*************************************************" <<endl ;
 cout<<"Enter Input :" <<endl ;
 cin>> choice2 ;


 switch(choice2) {
  // student menu case 1   
  // checkCourse will check if there is no course added by admin so its
// value will be zero 
  case 1 : {
   cout<<"Course Name" <<"\t\t"<<"Credit Hours"<<endl ;
   cout<<"*************************************************" <<endl ;
   if(course1 != "NV"){
    cout<<course1<<"\t\t\t"<<cd1  <<endl ;
    checkCourse = checkCourse + 1 ;
   }
    if(course2 != "NV"){
    cout<<course2<<"\t\t\t"<<cd2  <<endl ;
     checkCourse = checkCourse + 1 ;
   } 
    if(course3 != "NV"){
    cout<<course3<<"\t\t\t"<<cd3  <<endl ;
     checkCourse = checkCourse + 1 ;
   } 
    if(course4 != "NV"){
    cout<<course4<<"\t\t\t"<<cd4  <<endl ;
     checkCourse = checkCourse + 1 ;
   } 
    if(course5 != "NV"){
    cout<<course5<<"\t\t\t"<<cd5  <<endl ;
     checkCourse = checkCourse + 1 ;
   }  
   if(checkCourse == 0) {
    cout<<"No courses added by the admin yet."<<endl ; 
   }

    break;
  }
  // student menu case 2 
 case 2 : {
      if(course1 != "NV") {
         cout<<"Enter grade for "<<course1<<": "  ;
         cin>> grade1 ;  
          checkNoCourse = checkNoCourse + 1 ;
        

 if(grade1 == 'A'){
    pointA = 4 * cd ;
    totCd = totCd + cd ;
    totPoint  = totPoint  + pointA ;
    
  }
  else if(grade1 == 'B'){
    pointB = 3.2  * cd ;
    totCd = totCd + cd ;
    totPoint  = totPoint  + pointB ;
    
  }
  else if(grade1 == 'C'){
    pointC = 2.7 * cd ;
    totCd = totCd + cd ;
    totPoint  = totPoint  + pointC ;
    
  }
  else if(grade1 == 'D'){
    pointD = 2.0 * cd ;
    totCd = totCd + cd ;
    totPoint  = totPoint  + pointD ;
    
  }
  else if(grade1 == 'F'){
    pointF = 1.0 * cd ;
    totCd = totCd + cd ;
    totPoint  = totPoint  + pointF ;
   
  }
  else {
   cout<<"Invalid input " << endl ;
  }
   


      }
      if(course2 != "NV") {
         cout<<"Enter grade for "<<course2<<": "  ;
         cin>> grade2 ;  
          checkNoCourse = checkNoCourse + 1 ;
     

        if(grade2 == 'A'){
    pointA = 4 * cd ;
    totCd = totCd + cd ;
    totPoint  = totPoint  + pointA ;
    
  }
  else if(grade2 == 'B'){
    pointB = 3.2  * cd ;
    totCd = totCd + cd ;
    totPoint  = totPoint  + pointB ;
    
  }
  else if(grade2 == 'C'){
    pointC = 2.7 * cd ;
    totCd = totCd + cd ;
    totPoint  = totPoint  + pointC ;
    
  }
  else if(grade2 == 'D'){
    pointD = 2.0 * cd ;
    totCd = totCd + cd ;
    totPoint  = totPoint  + pointD ;
    
  }
  else if(grade2 == 'F'){
    pointF = 1.0 * cd ;
    totCd = totCd + cd ;
    totPoint  = totPoint  + pointF ;
   
  }
  else {
   cout<<"Invalid input " << endl ;
  }







      }
      if(course3 != "NV") {
         cout<<"Enter grade for "<<course3<<": "  ;
         cin>> grade3 ;  
          checkNoCourse = checkNoCourse + 1 ;
     
         if(grade3 == 'A'){
    pointA = 4 * cd ;
    totCd = totCd + cd ;
    totPoint  = totPoint  + pointA ;
    
  }
  else if(grade3 == 'B'){
    pointB = 3.2  * cd ;
    totCd = totCd + cd ;
    totPoint  = totPoint  + pointB ;
    
  }
  else if(grade3 == 'C'){
    pointC = 2.7 * cd ;
    totCd = totCd + cd ;
    totPoint  = totPoint  + pointC ;
    
  }
  else if(grade3 == 'D'){
    pointD = 2.0 * cd ;
    totCd = totCd + cd ;
    totPoint  = totPoint  + pointD ;
    
  }
  else if(grade3 == 'F'){
    pointF = 1.0 * cd ;
    totCd = totCd + cd ;
    totPoint  = totPoint  + pointF ;
   
  }
  else {
   cout<<"Invalid input " << endl ;
  }




      }
      if(course4 != "NV") {
         cout<<"Enter grade for "<<course4<<": "  ;
         cin>> grade4 ;  
          checkNoCourse = checkNoCourse + 1 ;
     

        if(grade4 == 'A'){
    pointA = 4 * cd ;
    totCd = totCd + cd ;
    totPoint  = totPoint  + pointA ;
    
  }
  else if(grade4 == 'B'){
    pointB = 3.2  * cd ;
    totCd = totCd + cd ;
    totPoint  = totPoint  + pointB ;
    
  }
  else if(grade4 == 'C'){
    pointC = 2.7 * cd ;
    totCd = totCd + cd ;
    totPoint  = totPoint  + pointC ;
    
  }
  else if(grade4 == 'D'){
    pointD = 2.0 * cd ;
    totCd = totCd + cd ;
    totPoint  = totPoint  + pointD ;
    
  }
  else if(grade4 == 'F'){
    pointF = 1.0 * cd ;
    totCd = totCd + cd ;
    totPoint  = totPoint  + pointF ;
   
  }
  else {
   cout<<"Invalid input " << endl ;
  }




      }
      if(course5 != "NV") {
         cout<<"Enter grade for "<<course5<<": "  ;
         cin>> grade5 ;  
          checkNoCourse = checkNoCourse + 1 ;
   

        if(grade5 == 'A'){
    pointA = 4 * cd ;
    totCd = totCd + cd ;
    totPoint  = totPoint  + pointA ;
    
  }
  else if(grade5 == 'B'){
    pointB = 3.2  * cd ;
    totCd = totCd + cd ;
    totPoint  = totPoint  + pointB ;
    
  }
  else if(grade5 == 'C'){
    pointC = 2.7 * cd ;
    totCd = totCd + cd ;
    totPoint  = totPoint  + pointC ;
    
  }
  else if(grade5 == 'D'){
    pointD = 2.0 * cd ;
    totCd = totCd + cd ;
    totPoint  = totPoint  + pointD ;
    
  }
  else if(grade5 == 'F'){
    pointF = 1.0 * cd ;
    totCd = totCd + cd ;
    totPoint  = totPoint  + pointF ;
   
  }
  else {
   cout<<"Invalid input " << endl ;
  }




      }
      
   
    GPA = totPoint / totCd ;
    cout<<"Your Semester GPA is : " << GPA <<endl ;
    

 


    break;
  }
  // student menu Exit 
  case 0 : {
      flag2 = true ;
    break;
  }
  default : {
   cout<<"Invalid Input" <<endl ;
    break ;
  }
 
 }



   
 }
 break;
 }
 // Main switch case 0 exit
 case 0 : 
 {  
   cout<<"Program Closed Successfully " <<endl ;
   flag = true ;
   break ; 
 }
 default : {
  cout<<"Invalid Input  " <<endl ;
  
 }


 }


}
 return 0 ;
}