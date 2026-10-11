// 5 integers input lo.
// Array ke andar sab se chhota number find karo.

// Example:
// 10 45 12 90 30

// Smallest = 10

#include <iostream>
using namespace std;

int main (){
    int number[5], smallest;

    for (int i = 0 ; i < 5 ; i ++){
        cout << "Enter " << i + 1 << " Number: ";
        cin >> number[i];
    }
    smallest = number[0];
    for( int i = 1; i < 5 ; i ++) {
        if(smallest > number[i]){
            smallest = number[i];
        }
    }

    cout << "Smallest Number  is : " << smallest << endl;

    return 0;
}