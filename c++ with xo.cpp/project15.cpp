//Develop a program that converts a temperature from Fahrenheit to Celsius or vice versa based on user input. The
//user should specify the type of conversion.

#include <iostream>
using namespace std;

int main() {
    char choice;
    float temp, converted;

    cout << "Enter temperature: ";
    cin >> temp;

    cout << "Enter conversion type (C for Celsius, F for Fahrenheit): ";
    cin >> choice;

    if (choice == 'C' || choice == 'c') {
        // Convert Fahrenheit to Celsius
        converted = (temp - 32) * 5 / 9;
        cout << temp << " F = " << converted << " C" << endl;
    } 
    else if (choice == 'F' || choice == 'f') {
        // Convert Celsius to Fahrenheit
        converted = (temp * 9 / 5) + 32;
        cout << temp << " C = " << converted << " F" << endl;
    } 
    else {
        cout << "Invalid choice!" << endl;
    }

    return 0;
}
