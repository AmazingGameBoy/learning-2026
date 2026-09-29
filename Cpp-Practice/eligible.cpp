// User se age lo.

// Agar age >= 18
// → "You are eligible."

// Warna
// → "You are not eligible."


#include <iostream>
using namespace std;

int main(){
    int age ;

    cout << "Enter your age: ";
    cin >> age ;

    if (age >= 18){
        cout << "You are eligible." << endl;
    }
    else{
        cout << "You are not eligible. " << endl;
    }    
    
    return 0;
    
}