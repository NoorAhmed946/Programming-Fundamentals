#include<iostream>

using namespace std ;
void ticketDis(string , float) ;

main() {
  string name ;
  float price ;
  cout<<"Enter Country's Name : " ;
  cin>> name ;
  cout<<"Enter ticket's price in dollars : $" ;
  cin>> price ;
  ticketDis(name,price);
}
void ticketDis(string name , float price ){
  float disPrice ;
  if(name == "Pakistan" || name == "pakistan"){
   disPrice = price - (price * 0.05);
   cout<<"Final Ticket Price after discount : $"<<disPrice ;
  }
 else if(name == "Ireland" || name == "ireland"){
    disPrice = price - (price * 0.10);
   cout<<"Final Ticket Price after discount : $"<<disPrice ;
  }
  else if(name == "India" || name == "india"){
    disPrice = price - (price * 0.20);
   cout<<"Final Ticket Price after discount : $"<<disPrice ;
  }
  else if(name == "England" || name == "england"){
    disPrice = price - (price * 0.30);
   cout<<"Final Ticket Price after discount : $"<<disPrice ;
  }
  else{
    disPrice = price - (price * 0.45);
   cout<<"Final Ticket Price after discount : $"<<disPrice ;
  }

}