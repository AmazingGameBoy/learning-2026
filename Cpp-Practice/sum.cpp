// 1 se 100 tak saare numbers ka sum nikalo.

// Expected:
// 1 + 2 + 3 + ... + 100 = 5050

#include <iostream>
using namespace std;

int main (){
    int sum = 0;
    for(int i = 1; i <=100 ; i++){
        sum += i;
    }
    cout << "Sum of 1 to 100 : " << sum << endl;

    return 0;
}