//Write a program to calculate average of three integers.
// number are given by the user
#include <iostream>
using namespace std;

int main() {
    int a, b, c;
    float average;

    cout << "Enter three integers: ";
    cin >> a >> b >> c;

    average = (a + b + c) / 3.0;

    cout << "Average = " << average << endl;

    return 0;
}
