//Write a program to count digits in a given number

#include <iostream>
using namespace std;

int main() {
    long long num;
    int count = 0;

    cout << "Enter a number: ";
    cin >> num;

    if (num == 0) {
        count = 1;  // 0 has 1 digit
    } else {
        if (num < 0) num = -num;  // make number positive
        while (num > 0) {
            num /= 10;  // remove last digit
            count++;
        }
    }

    cout << "Number of digits: " << count << endl;

    return 0;
}
