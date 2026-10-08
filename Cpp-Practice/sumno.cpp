// User se N input lo.
// 1 se N tak sab numbers ka sum nikalo.

// Example:
// Enter N: 5
// Sum = 15

#include <iostream>
using namespace std;

int main () {
    int sum = 0, N;

    cout << "Enter a number: " << endl;
    cin >> N;

    if (N < 1){
        cout << "Need positive number." << endl;
    } 
    else{
        for (int i = 1; i <= N; i ++){
            sum += i;
        }
        cout << "Sum of " << N << " is : " << sum << endl;
    }
    

    return 0;
}