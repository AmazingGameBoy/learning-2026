// Function:
// int maximum(int a, int b)

// main() mein 2 numbers input lo.
// Function dono mein se bara number return kare.
// main() returned number print kare.

// Agar dono equal hon to bhi sensible output dena.

#include <iostream>
using namespace std;

int maximum(int a , int b){
    if(b > a){
        return b;
    }
    else{
        return a;
    }
}

int main(){
    int n1 , n2;

    cout << "Enter a first number ";
    cin>> n1;
    cout << "Enter a 2nd number ";
    cin>> n2;

    if (n1 == n2){
        cout << "Both number are equal" << endl;
    }
    else{
        cout << "Largest Number is : " << maximum(n1,n2) << endl;
    }

    return 0;
}