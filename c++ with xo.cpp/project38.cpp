//Write a program to find next Prime number of a give number.

#include <iostream>
using namespace std;

// Function to check if a number is prime
bool isPrime(int num) {
    if (num <= 1) return false;
    for (int i = 2; i * i <= num; i++) {
        if (num % i == 0) return false;
    }
    return true;
}

int main() {
    int num;
    cout << "Enter a number: ";
    cin >> num;

    int nextNum = num + 1;

    while (!isPrime(nextNum)) {
        nextNum++;
    }

    cout << "The next prime number after " << num << " is: " << nextNum << endl;

    return 0;
}
