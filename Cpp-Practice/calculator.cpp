// 2 numbers input lo.
// Choice input lo:

// 1 → Addition
// 2 → Subtraction
// 3 → Multiplication
// 4 → Division

// switch statement se result print karo.

#include <iostream>
using namespace std;

int main () {
    double n1 , n2;
    char op;

    cout << "Enter first number : ";
    cin >> n1;
    cout << "Enter 2nd number : ";
    cin >> n2;
    cout << "Enter operation (+ , / , - , *): ";
    cin >> op;

    switch (op)     
    {
    case '+':
        cout << n1 + n2 << endl;
        break;
    case '-':
        cout << n1 - n2 << endl;
        break;
    case '*':
        cout << n1 * n2 << endl;
        break;
    case '/':
        if(n2 == 0)
            cout << "Number cannot divide by zero " << endl;
        else
            cout << n1 / n2 << endl;
        break;
    default:
        cout << "Invalid Operation" << endl;
    }
    return 0;
}