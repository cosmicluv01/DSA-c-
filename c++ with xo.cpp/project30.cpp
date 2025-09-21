//Write a program to reverse a given number
#include <iostream>
using namespace std;

int main() {
    long long num, reversed = 0;
    
    cout << "Enter a number: ";
    cin >> num;

    long long original = num;  // store original number
    if (num < 0) num = -num;   // handle negative numbers

    while (num > 0) {
        int digit = num % 10;      // get last digit
        reversed = reversed * 10 + digit;  // append digit
        num /= 10;                 // remove last digit
    }

    if (original < 0) reversed = -reversed;  // restore negative sign
    cout << "Reversed number: " << reversed << endl;

    return 0;
}
