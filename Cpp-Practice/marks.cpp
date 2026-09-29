// User se marks lo.

// marks >= 40
// → Pass

// warna
// → Fail

#include <iostream>
using namespace std;

int main() {
    int marks ;
    cout << "Enter your marks: " ;
    cin >> marks;

    if (marks >= 40){
        cout << "You are Pass." << endl;
    }
    else{
        cout << "You are fail." << endl;
    }

    return 0;
}
