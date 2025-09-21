//Write a program to calculate circumference of a circle.
#include <iostream>
using namespace std;

int main() {

    float radius, circumference;
    const float PI = 3.14159;  // this is the  value of π
    cout << "Enter radius of the circle: ";
    cin >> radius;
    circumference = 2 * PI * radius;
    cout << "Circumference of the circle = " << circumference << endl;
    return 0;
    
}
