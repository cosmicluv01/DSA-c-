//. Write a program to check whether a given number is there in the Fibonacci series or not.

#include <iostream>
using namespace std;

int main() {
    long long num;
    long long first = 0, second = 1, next = 0;
    bool found = false;

    cout << "Enter a number: ";
    cin >> num;

    if (num == 0 || num == 1) {
        found = true;
    } 
    else {
        while (next < num) {
            next = first + second;
            first = second;
            second = next;
            if (next == num) {
                found = true;
                break;
            }
        }
    }

    if (found)
        cout << num << " is in the Fibonacci series." << endl;
    else
        cout << num << " is not in the Fibonacci series." << endl;

    return 0;
}
