//Write a program to check whether a given number is an Armstrong number or not.

#include <iostream>
#include <cmath>
using namespace std;

int main() {
    int num, original, sum = 0, digits = 0;

    cout << "Enter a number: ";
    cin >> num;

    original = num;

    // Count number of digits
    int temp = num;
    while (temp > 0) {
        digits++;
        temp /= 10;
    }

    // Calculate sum of digits raised to the power of number of digits
    temp = num;
    while (temp > 0) {
        int digit = temp % 10;
        sum += pow(digit, digits);
        temp /= 10;
    }

    // Check Armstrong condition
    if (sum == original)
        cout << num << " is an Armstrong number." << endl;
    else
        cout << num << " is not an Armstrong number." << endl;

    return 0;
}
