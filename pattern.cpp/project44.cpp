//number in row 
#include <iostream>
using namespace std;
int main(){
    int row = 4, coloum = 6;
    for ( int i = 1; i <= row; i++){
        for (int j = 1; j<= coloum; j++){
            cout << i<< " ";
        }
        cout << endl;
    }
    return 0;
}