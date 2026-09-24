#include <iostream>

using namespace std;

int main() {
    double Celius;

    cout << "Enter temp in Celius : " ;
    cin >> Celius;

    double fahrenheit = (Celius * (9. / 5)) + 32;

    cout << "Temperature in Farenhiet is : " << fahrenheit << endl;

    return 0;
}