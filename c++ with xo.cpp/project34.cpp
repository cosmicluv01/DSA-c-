//Write a program to calculate HCF of two numbers.

#include <iostream>
using namespace std;

// Function to calculate HCF using Euclidean algorithm
int hcf(int a, int b) {
    while (b != 0) {
        int temp = b;
        b = a % b;
        a = temp;
    }
    return a;
}

int main() {
    int num1, num2;

    cout << "Enter two positive integers: ";
    cin >> num1 >> num2;

    if (num1 <= 0 || num2 <= 0) {
        cout << "Please enter positive integers only!" << endl;
        return 0;
    }

    int result = hcf(num1, num2);

    cout << "HCF (GCD) of " << num1 << " and " << num2 << " is: " << result << endl;

    return 0;
}
