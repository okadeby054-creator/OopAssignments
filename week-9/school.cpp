#include<iostream> 
#include<string>
using namespace std;
class person{
    public:
    string name;
    int age;
   void displayperson(){
        cout<<"name: "<<name<<endl;
        cout<<"age: "<<age<<endl;
    }
};
class student:public person{
    public:
    int admno;
    string room;
    void displaystudent(){
        cout<<"name: "<<name<<endl;
        cout<<"age: "<<age<<endl;
        cout<<"admission number: "<<admno<<endl;
        cout<<"room: "<<room<<endl;

    }
};
int main(){
    student s1;
    s1.name="james";
    s1.age=20;
    s1.admno=1456;
    s1.room="11th";
    s1.displaystudent();
}