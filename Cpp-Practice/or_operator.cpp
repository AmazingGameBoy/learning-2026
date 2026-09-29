// age < 13 OR age > 60
// → Special age category

// warna
// → Normal age category

#include <iostream>
using namespace std;

int main () {
    int age;
    cout << "Enter your age: ";
    cin >> age ;

    if (age < 13 || age > 60){
        cout << "Special age category." << endl;
    }
    else {
        cout << "Normal age category. " << endl;
    }
    return 0;
}