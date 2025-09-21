//WAP to take time as an input in below given format and convert the time format and display the result as given below.
//User Input date format – “HH:MM”

#include <iostream>
#include <string>
using namespace std;

int main() {
    string time, hour, minute;

    cout << "Enter time in HH:MM format: ";
    cin >> time;

    // Extract hour and minute
    hour = time.substr(0, 2);    // first 2 characters → HH
    minute = time.substr(3, 2);  // characters at index 3,4 → MM

    cout << "Hour - " << hour << ", Minute - " << minute << endl;

    return 0;
}
