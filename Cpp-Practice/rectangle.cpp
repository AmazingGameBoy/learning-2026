#include <iostream>

using namespace std;

int main() {
    double length , width ;

    cout << "Enter length: ";
    cin >> length;
    cout << "Enter width: ";
    cin >> width;

    cout << "Area of rectangle: " << length * width << endl;

    cout << "Perimeter of rectangle: " << 2 * (length + width) << endl;
    

    return 0;
}