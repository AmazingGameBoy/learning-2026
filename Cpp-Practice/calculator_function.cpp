// Functions banao:

// double add(double a, double b)
// double subtract(double a, double b)
// double multiply(double a, double b)
// double divide(double a, double b)

// main() mein:
// - 2 numbers input
// - operator input (+ - * /)
// - switch use karo
// - relevant function call karo

// Division mein zero ka case bhi handle karna.

#include <iostream>
using namespace std;

double add (double a, double b){
    return a + b;
}

double subtract(double a , double b){
    return a - b;
}
double multiply(double a, double b){
    return a * b;
}
double divide(double a, double b){
    return a / b;
}

int main (){
    double n1 , n2;
    char op;

    cout << "Enter first number: ";
    cin >> n1;

    cout << "Enter 2nd number: ";
    cin >> n2;

    cout << "Enter operation ( +, *, / , -): ";
    cin >> op;


    switch(op){
        case '+':
            cout << "Sum is: " << add(n1,n2) << endl;
            break;
        case '-':
            cout << "Subtraction is: " << subtract(n1, n2) << endl;
            break;
        case '*':
            cout << "Multiplication is: " << multiply(n1 , n2) << endl;
            break;
        case '/':
            if(n2 == 0){
                cout << "Division by zero is not possible." << endl;
            }
            else{
                cout << "Division result is: " << divide(n1, n2) << endl;
            }
            break;
        default:
            cout << "Invalid Operation." << endl;
    }
    return 0;
}