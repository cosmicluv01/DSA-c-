//Write a program to calculate simple interest
#include <iostream>
using namespace std;

int main() {
    float principal, rate, time, simpleInterest;

    cout << "Enter Principal Amount: ";
    cin >> principal;

    cout << "Enter Rate of Interest (%): ";
    cin >> rate;

    cout << "Enter Time (in years): ";
    cin >> time;

    // Formula: SI = (P × R × T) / 100
    simpleInterest = (principal * rate * time) / 100;

    cout << "Simple Interest = " << simpleInterest << endl;

    return 0;
}
