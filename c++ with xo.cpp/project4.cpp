//. Write a program to ask user about the cost price and selling price banana per dozen. 
//Calculate the profit or loss earnedupon selling 25 bananas.
#include <iostream>
using namespace std;

int main() {
    float cpDozen, spDozen;   // cost price and selling price per dozen
    float cpOne, spOne, totalCP, totalSP, result;

    cout << "Enter cost price per dozen of bananas: ";
    cin >> cpDozen;

    cout << "Enter selling price per dozen of bananas: ";
    cin >> spDozen;

    // price of one banana
    cpOne = cpDozen / 12.0;
    spOne = spDozen / 12.0;

    // total CP and SP for 25 bananas
    totalCP = cpOne * 25;
    totalSP = spOne * 25;

    result = totalSP - totalCP;

    if (result > 0)
        cout << "Profit = " << result << endl;
    else if (result < 0)
        cout << "Loss = " << -result << endl;
    else
        cout << "No Profit No Loss" << endl;

    return 0;
}
