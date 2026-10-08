// User se N lo.

// Example:
// N = 5

// 5! = 5 × 4 × 3 × 2 × 1
//    = 120

#include <iostream>
using namespace std;

int main (){
    int n , factorial = 1;

    cout << "Enter number ";
    cin >> n;

    if(n == 0){
        cout << "factorial of Zero  is : 1" << endl;
    }
    else if(n < 0){
        cout << "Number is negative" << endl;
    }
    else{
        for (int i = 1; i <= n; i++){
            factorial *= i;
        }
        cout << "factorial of "<< n << " is: " << factorial << endl;
    }
    return 0;
}