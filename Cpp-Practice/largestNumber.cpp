// User se n1, n2, n3 lo.

// Agar n1 sab se bara ho
// → First number is greatest

// Agar n2 sab se bara ho
// → Second number is greatest

// Agar n3 sab se bara ho
// → Third number is greatest

// Agar tino equal hon
// → All numbers are equal

#include <iostream>
using namespace std;

int main () {
    int n1, n2 ,n3;

    cout << "Enter first number " ;
    cin >> n1;
    cout << "Enter 2nd number : " ;
    cin >> n2;
    cout << "Enter third number: " ;
    cin >> n3;

    if (n1 > n2 && n1 > n3){
        cout << "First number is largest. " << endl;
    }
    else if (n2 > n1 && n2 > n3){
        cout << "2nd number is largest. " << endl;
    }
    else if (n3 > n1 && n3 > n2){
        cout << "Third number is largest." << endl;
    }
    else if(n1 == n2 && n2 == n3) {
        cout << "All number are equal." << endl;
    }
    else {
        cout << "Two numbers may be equal." << endl;
    }
    return 0;
}