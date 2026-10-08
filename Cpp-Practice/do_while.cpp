// 10 se 1 tak countdown print karo.

// Output:
// 10
// 9
// 8
// ...
// 1

#include <iostream>
using namespace std;

int main (){
    int i = 10;

    do{
        cout << i << endl;
        i--;
    }while(i > 0);

    return 0;
}