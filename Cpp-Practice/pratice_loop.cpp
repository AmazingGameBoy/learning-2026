// User se number input lo.

// Agar number 0 ya negative ho,
// to dobara number maango.

// Jab positive number mil jaye,
// program stop ho aur print kare:
// "Valid positive number entered."

#include <iostream>
using namespace std;

int main () {
    int number ;

    do{
    cout << "Enter a number : " << endl;
    cin >> number;

    if (number > 0){
        cout << "Valid positive number entered." << endl;
        break;
    }
    }while(number <= 0);

    
}