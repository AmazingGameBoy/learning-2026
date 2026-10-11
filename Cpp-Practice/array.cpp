// 5 integers ka array banao.

// User se 5 numbers input lo.
// Phir for loop use karke saare numbers print karo.

// Example:
// Enter 5 numbers:
// 10
// 20
// 30
// 40
// 50

// Array elements:
// 10 20 30 40 50


#include <iostream>
using namespace std;

int main(){
    int marks[5];

    for(int i = 0; i < 5 ; i++){
        cout << "Enter marks of " << i+1 << " Student: " ;
        cin >> marks[i];
    }

     for(int i = 0; i < 5 ; i++){
        cout << "Marks of " << i+1 << " Student: " << marks[i] << endl;
    }
    
    return 0;
}