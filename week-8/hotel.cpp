#include<iostream>
#include<string>
using namespace std;
class roombooking{
    public:
    string guestname;
    int roomnumber;
    int daysbooked;

public:
roombooking(string name,int number,int booked){
    guestname = name;
    roomnumber = number;
    daysbooked = booked;
    cout<<"room booking confirmed"<<endl;
}
void displaybooking(){
    cout<<"\n=====BOOKING DETAILS======"<<endl;
    cout<<"guestname:"<<guestname<<endl;
    cout<<"roomnumber:"<<roomnumber<<endl;
    cout<<"daysbooked:"<<daysbooked<<endl;
    cout<<"=========================="<<endl;
}
//destructor
~roombooking(){
    cout<<"\n room booking ended,room released "<<endl;
  }
};
int main(){
    //object of room booking
    roombooking myroom("james dean",104,4);
    //display booking details
    myroom.displaybooking();
    return 0;
}