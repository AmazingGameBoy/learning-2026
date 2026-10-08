// 1 se 100 tak sirf even numbers print karo.

// Output:
// 2
// 4
// 6
// 8
// ...
// 100

#include <iostream>
using namespace std;
int main () {
    
    for(int i = 2 ;i <= 100; i += 2){
        cout << i << endl;
    }
    return 0;
}