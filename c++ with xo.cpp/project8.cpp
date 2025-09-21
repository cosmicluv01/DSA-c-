//WAP to take date as an input in below given format and convert the date format and display the result as given below.
//User Input date format – “DD/MM/YYYY” (27/11/2022) Output format – “Day – DD , Month – MM , Year – YYYY” (Day – 27, Month – 07, Year – 2022

#include <iostream>
#include <string>
using namespace std;

int main() {
    string date;
    string day, month, year;

    cout << "Enter date in DD/MM/YYYY format: ";
    cin >> date;

    // Extract substrings
    day = date.substr(0, 2);      // first 2 chars → DD
    month = date.substr(3, 2);    // chars at index 3,4 → MM
    year = date.substr(6, 4);     // chars at index 6-9 → YYYY

    cout << "Day - " << day << ", Month - " << month << ", Year - " << year << endl;

    return 0;
}
