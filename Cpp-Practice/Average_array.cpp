// 5 integers array mein input lo.

// Phir calculate karo:
// - Total / Sum
// - Average

// Example:
// 10 20 30 40 50

// Sum = 150
// Average = 30

#include <iostream>
using namespace std;

int main(){
    int numbers[5] , sum = 0;

    for(int i =0 ; i < 5; i++){
        cout << "Enter " << i + 1 << " Number: ";
        cin >> numbers[i];
    }

    for(int i =0 ; i < 5; i++){
        sum += numbers[i];
    }

    cout << "Sum of Five number is: "  << sum << endl;
    cout << "Average of Five number is: " << sum/5.0 << endl;


    return 0;

}