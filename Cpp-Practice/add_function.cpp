// Ek function banao:

// int sum(int a, int b)

// main() mein user se 2 numbers input lo.
// Numbers function ko do.
// Function result return kare.
// main() result print kare.

#include <iostream>
using namespace std;

int add(int a , int b){
    return a+b; 
}

int main (){
    int a, b;

    cout<< "Enter first number: ";
    cin >> a;
    cout << "Enter 2nd number: ";
    cin >> b;

    cout << "Sum of 2 Numbers is: " << add(a,b) << endl;

    return 0;
}