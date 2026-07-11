/*oka debora bcs-05-0067/2025
a c++ program for employee data protection system */

#include<iostream> 
#include<string> 
using namespace std;
class employee{
    private:
    string employeename;
    int employeeID;
    float basicsalary;
    public:
    void setemployeeDetails(string name, int ID, float salary){
        employeename = name;
        employeeID = ID;
        basicsalary = salary;
    }
    float calculatenetsalary(){
        return basicsalary + (0.10*basicsalary);
    }
    void displayemployeedetails(){
      cout<<"\n =====DISPLAY DETAILS=====\n";
       cout<<"name:"<<employeename<<endl;
       cout<<"ID: "<<employeeID<<endl;
       cout<<"basicsalary: "<<basicsalary<<endl;
       cout<<"netsalary: " <<calculatenetsalary() <<endl;

    }
};
int main(){
    employee emp1;

    emp1.setemployeeDetails("mary",56783, 35000.00);

    emp1.displayemployeedetails();

    return 0;
}