// User se integer lo.
// Even hai ya odd print karo.

#include <iostream>
using namespace std;
int main (){
    int number ;

    cout << "Enter a number: " << endl;
    cin >> number;

    if (number % 2 == 0){
        cout << "Number is Even. " << endl;

    }
    else{
        cout << "number is odd. " << endl;
    }

    return 0;
}