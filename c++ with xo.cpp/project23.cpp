//. Write a program to calculate sum of first N odd natural  numbers
#include <iostream>
using namespace std;

int main() {
    int N, sum = 0;

    cout << "Enter a positive integer N: ";
    cin >> N;

    for(int i = 1; i <= N; i++) {
        sum += (2 * i - 1);  // odd numbers: 1, 3, 5, ...
    }

    cout << "Sum of first " << N << " odd natural numbers is: " << sum << endl;

    return 0;
}
