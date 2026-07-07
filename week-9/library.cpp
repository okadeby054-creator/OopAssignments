/*oka debora 
bcs-05-0067/2025
a c++ program for asimple library mangement system using multilevel inheritance
*/
#include<iostream>
#include<string>
using namespace std;
class person{
    protected:
    string name;
    public:
    void setname(string n){
        name = n;
    }
    string getname(){
        return name;
    }
};
class librarymember:public person{
    private:
    int memberID;
    int booksborrowed;
    public:
    librarymember(string n,int ID,int books){
        setname(n);
        memberID = ID;
        booksborrowed = books;
    }
    int getmemberID(){
        return memberID;
    }
    int getbooksborrowed(){
        return booksborrowed;
    }
};
class premiummember:public librarymember{
    private:double membershipfee;
    public:
    premiummember(string n,int ID,int books,double fee):librarymember(n,ID,books){
        membershipfee = fee;
    }
    double getmembershipfee(){
        return membershipfee;
    }
};
int main(){
    premiummember memb1("jane",1456,4,200.0);
    cout<<"name: "<<memb1.getname()<<endl;
    cout<<"memberID: "<<memb1.getmemberID()<<endl;
    cout<<"booksborrowed: "<<memb1.getbooksborrowed()<<endl;
    cout<<"membershipfee: "<<memb1.getmembershipfee()<<endl;
    return 0;
}
