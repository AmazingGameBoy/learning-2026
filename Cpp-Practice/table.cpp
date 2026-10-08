// User se number lo.
// Us number ka table 1 se 10 tak print karo.

// Example:
// Enter number: 5

// 5 x 1 = 5
// 5 x 2 = 10
// ...
// 5 x 10 = 50

#include <iostream>
using namespace std;
int main () {
    int number;

    cout << "Enter a number for table :";
    cin >> number;

    for(int i = 1; i < 11; i++){
        cout << number << " x " << i << " = " << number*i << endl;
    }
    return 0;
}