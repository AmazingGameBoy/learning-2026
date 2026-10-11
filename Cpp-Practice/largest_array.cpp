// 5 integers array mein input lo.

// Array ke andar sab se bara number find karo.

// Example:
// 10 45 12 90 30

// Largest = 90

#include <iostream>
using namespace std;

int main(){
    int numbers[5] , largest;

    for (int i =0 ; i < 5 ; i ++){
        cout << "Enter " << i+1 << " Number: ";
        cin >> numbers[i];
    }
    largest = numbers[0];
    for( int i = 0; i < 5 ; i++){
        if(largest < numbers[i]){
            largest = numbers[i];
        }
    }

    cout << "Largest number is: " << largest << endl;

    return 0;
}