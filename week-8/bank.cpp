#include<iostream>
#include<string>
using namespace std;
class bankaccount{
    public:
        string accountholdername;
        int accountnumber;
        double accountbalance;
    public:
        bankaccount(string name, int number, double balance){
            accountholdername = name;
            accountnumber = number;
            accountbalance = balance;
            cout<<"account successfully created"<<endl;
        }
        //memeber function to display account details
        void displayaccount(){
            cout<<"\n=====ACCOUNT DETAILS====="<<endl;
            cout<<"accountholdername:"<<accountholdername<<endl;
            cout<<"accountnumber:"<<accountnumber<<endl;
            cout<<"accountbalance:$"<<accountbalance<<endl;
            cout<<"=========================="<<endl;
        }

        //destructor
        ~bankaccount(){
            cout<<"\n account closed successfully"<<endl;
        }
    };
    int main(){
        //an object of bankaccount
        bankaccount myaccount1("mercy jane",3245617,8000.00);

        //display account details
        myaccount1.displayaccount();
        return 0;
    }