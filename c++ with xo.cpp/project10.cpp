//Write a program to input three characters from the user and display characters with their corresponding ASCII
//codes.
#include <iostream>
using namespace std;

int main() {
    char ch1, ch2, ch3;

    cout << "Enter three characters: ";
    cin >> ch1 >> ch2 >> ch3;

    cout << "Character: " << ch1 << " | ASCII: " << int(ch1) << endl;
    cout << "Character: " << ch2 << " | ASCII: " << int(ch2) << endl;
    cout << "Character: " << ch3 << " | ASCII: " << int(ch3) << endl;

    return 0;
}
