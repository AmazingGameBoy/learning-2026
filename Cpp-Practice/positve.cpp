// User se number lo.

// Agar number > 0
// → Positive

// Agar number < 0
// → Negative

// Warna
// → Zero

#include <iostream>
using namespace std;

int main (){
    int number ;
    cout << "Enter a number: ";
    cin >> number ;

    if (number > 0){        
        cout << "Number is positive." << endl;
    }
    else if (number <0){
        cout << "Number is negative." << endl;
    }
    else {
        cout << "Number is Zero." << endl;
    }

    return 0;

}
