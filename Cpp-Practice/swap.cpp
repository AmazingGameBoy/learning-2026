#include <iostream>
using namespace std;

int main() {
    int a = 10, b = 12, temp;

    cout << "Before swap:" << endl;
    cout << "a = " << a << endl;
    cout << "b = " << b << endl;

    temp = a;
    a = b;
    b = temp;

    cout << "After swap:" << endl;
    cout << "a = " << a << endl;
    cout << "b = " << b << endl;

    return 0;
}