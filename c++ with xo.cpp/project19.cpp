//Develop a program that takes four numbers as input and prints the largest among them.

#include <iostream>
using namespace std;

int main() {
    int a, b, c, d, largest;

    cout << "Enter four numbers: ";
    cin >> a >> b >> c >> d;

    largest = a;  // assume a is largest initially

    if (b > largest) 
        largest = b;
    if (c > largest) 
        largest = c;
    if (d > largest) 
        largest = d;

    cout << "The largest number is: " << largest << endl;

    return 0;
}
