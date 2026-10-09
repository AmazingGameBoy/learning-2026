// Ek function banao:

// bool isEven(int number)

// main() mein user se integer input lo.

// Function check kare:
// number even ho → true return kare
// odd ho → false return kare

// main() mein:
// true ho → "Number is even"
// false ho → "Number is odd"

#include <iostream>
using namespace std;

bool isEven(int number){
    bool a = (number % 2) == 0;
    return a;
}

int main (){
    int number;

    cout << "Enter a number " ;
    cin>> number;

    bool b = isEven(number);

    if (b == true){
        cout << "Number is Even"<< endl;
    }
    else{
        cout << "Number is odd" << endl;
    }
    return 0;
}