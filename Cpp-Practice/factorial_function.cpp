// Function:
// int factorial(int n)

// main() mein number input lo.

// Agar negative ho:
// → "Factorial is not defined"

// Warna:
// factorial(n) function call karo
// aur result print karo.

#include <iostream>
using namespace std;

int factorial(int n){
    int fac = 1;
    if (n == 0 || n == 1){
        return fac;
    }
    else{
        for(int i = 1; i <= n ; i++){
            fac *= i;
        }

        return fac;
    }
}

int main(){
    int number , fac;
    cout << "Enter a number : ";
    cin >> number;

    if(number < 0){
        cout << "Factorial is not defined." << endl;
    }
    else{
        fac = factorial(number);
        cout << "Factorial of " << number << " is: " << fac << endl;
    }

    return 0;
}