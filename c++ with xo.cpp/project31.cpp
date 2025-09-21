//Write a program to find the Nth term of the Fibonacci  series.
#include <iostream>
using namespace std;

int main() {
    int N;
    long long first = 0, second = 1, next;

    cout << "Enter N: ";
    cin >> N;

    if (N <= 0) {
        cout << "Invalid input! N should be positive." << endl;
        return 0;
    } 
    else if (N == 1) {
        cout << "The 1st term of the Fibonacci series is: 0" << endl;
        return 0;
    } 
    else if (N == 2) {
        cout << "The 2nd term of the Fibonacci series is: 1" << endl;
        return 0;
    }

    for (int i = 3; i <= N; i++) {
        next = first + second;
        first = second;
        second = next;
    }

    cout << "The " << N << "th term of the Fibonacci series is: " << second << endl;

    return 0;
}
