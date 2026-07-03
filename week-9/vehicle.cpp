#include<iostream>
#include<string>
using namespace std;
class vehicle{
    public:
    string brand;
    int year;

    void displayvehicle(){
        cout<<"brand: "<<brand<<endl;
        cout<<"year: "<<year<<endl;
    }
};
class car:public vehicle{
    public:
    int no_ofdoors;
    double enginecapacity;
    void displaycar(){
        cout<<"brand: "<<brand<<endl;
        cout<<"year: "<<year<<endl;
        cout<<"number of doors: "<<no_ofdoors<<endl;
        cout<<"engine capacity: "<<enginecapacity<<endl;
    }
};
int main(){
    car c2;
    c2.brand="Toyota";
    c2.year=2006;
    c2.no_ofdoors=4;
    c2.enginecapacity=2.0;
    c2.displaycar();
}

