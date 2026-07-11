/*oka debora bcs-05-0067/2025
a c++ program to manage student fee information and secure sensitive data*/

#include<iostream> 
#include<string> 
using namespace std;
class student{
    private:
    string name;
    int admno;
    float feebalance;

    public:
    void inputstudentdata(){
        cout<<"enter name:"<<endl;
        getline(cin, name);

        cout<<"enter admno: "<<endl;
        cin>> admno;

        cout<<"enter feebalance: "<<endl;
        cin>> feebalance;
    }
    void makepayment(){
        float amount;
        cout<<"enter payment amount: "<<endl;
        cin>>amount;

        if (amount > feebalance){
            cout<<"payment successfull.you have paid more."<<endl;
            feebalance = feebalance - amount;
        }else if(amount < feebalance){
                 cout<<"payment successfull.you have paid less."<<endl;
                 feebalance = feebalance - amount;
        }else{
            cout<<"payment successful.you have paid the exact amount."<<endl;
            feebalance = 0.0;
        }

    }
    void displaystatus(){
        cout<<"\n=====DISPLAY DETAILS=====\n";
        cout<<"name:"<<name<<endl;
        cout<<"admno: "<<admno<<endl;
        cout<<"feebalance: "<<feebalance<<endl;
    }
};
int main(){
student stud1;

stud1.inputstudentdata();

stud1.makepayment();

stud1.displaystatus();

return 0;
}
