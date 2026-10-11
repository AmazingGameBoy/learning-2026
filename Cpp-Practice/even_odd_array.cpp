// 5 integers input lo.

// Count karo:
// - kitne even numbers hain
// - kitne odd numbers hain

// Example:
// 10 5 8 3 2

// Even = 3
// Odd = 2

#include <iostream>
using namespace std;

int main(){
    int numbers[5], even = 0, odd = 0;

    for(int i = 0; i < 5 ; i++){
        cout  << "Enter " << i+1 << " Number: ";
        cin >> numbers[i];
    }
    for(int i = 0; i < 5; i++){
        if(numbers[i] % 2 == 0){
            even+= 1;
        }
        else{
            odd += 1;
        }
    }

    cout << "Total Even Numbers: " << even << "\nTotal odd Numbers: " << odd << endl;

    return 0;
    
}