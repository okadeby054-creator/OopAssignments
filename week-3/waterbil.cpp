/*Oka debora BCS-05-0067/2025
c++ program to calculate monthly water bills*/
#include<iostream> 
#include<string>
using namespace std;

// Function to get customer details
void getcustomerdetails(string &name, float &unitsconsumed) {
    cout << "Enter name: ";
    cin.ignore();                  // BUG FIX 1: Clear leftover newline before getline
    getline(cin, name);

    cout << "Enter units consumed: ";
    cin >> unitsconsumed;
}

// Function to calculate bill
float calculatebill(float unitsconsumed, float rateperunit) {
    return unitsconsumed * rateperunit;
}

// Function to apply discount
float applydiscount(float unitsconsumed, float bill) {
    if (unitsconsumed <= 100) {    // BUG FIX 2: Discount rewards LOW consumption (<=100), not high
        return bill * 0.10;
    } else {
        return 0;
    }
}

// Function to display bill
void displaybill(string name, float unitsconsumed, float totalbill, float discount, float finalamount) {
    cout << "\n===== WATER BILL =====" << endl;
    cout << "Name           : " << name        << endl;
    cout << "Units Consumed : " << unitsconsumed << endl;
    cout << "Total Bill     : " << totalbill    << endl;
    cout << "Discount       : " << discount     << endl;
    cout << "Final Amount   : " << finalamount  << endl;
}

int main() {
    string name;
    float unitsconsumed, totalbill, discount, finalamount;

    // Calling functions
    getcustomerdetails(name, unitsconsumed);
    totalbill   = calculatebill(unitsconsumed, 60);
    discount    = applydiscount(unitsconsumed, totalbill);
    finalamount = totalbill - discount;
    displaybill(name, unitsconsumed, totalbill, discount, finalamount);

    return 0;
}