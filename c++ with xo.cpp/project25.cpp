//Write a program to calculate sum of cubes of first N natural numbers

#include <iostream>
using namespace std;

int main() {
    int N;
    long long sum = 0;  // use long long for large sums

    cout << "Enter a positive integer N: ";
    cin >> N;

    for(int i = 1; i <= N; i++) {
        sum += i * i * i;  // cube of i
    }

    cout << "Sum of cubes of first " << N << " natural numbers is: " << sum << endl;

    return 0;
}
