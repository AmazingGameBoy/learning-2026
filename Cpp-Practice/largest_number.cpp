// User se a aur b lo.

// Agar a > b
// → a is greater

// Agar b > a
// → b is greater

// Warna
// → Both are equal

#include <iostream>

using namespace std;

int main (){
    int n1 , n2;

    cout << "Enter first number: ";
    cin >> n1;
    cout << "Enter 2nd number: ";
    cin >> n2;

    if (n1 > n2){
        cout << "First number is Greater than 2nd." << endl;                                                
    }
    else if (n2 > n1){
        cout << "2nd number is Greater than first." << endl;
    }
    else{
        cout << "Both numbers are equal: " << endl;
 
   }
   return 0;
}