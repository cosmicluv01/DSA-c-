//Write a program to check whether two given numbers are co-prime numbers or not

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

    if (hcf(num1, num2) == 1)
        cout << num1 << " and " << num2 << " are co-prime numbers." << endl;
    else
        cout << num1 << " and " << num2 << " are not co-prime numbers." << endl;

    return 0;
}
