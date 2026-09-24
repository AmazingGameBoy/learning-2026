#include <iostream>

using namespace std;

int main() {
    double PI = 3.14 , Radius;

    cout << "Enter radius: " ;
    cin >> Radius;

    cout << "Area of circle is : " << PI * Radius * Radius << endl;
    cout << "Circumference of circle is : " << 2 * PI * Radius << endl;

    return 0;
}