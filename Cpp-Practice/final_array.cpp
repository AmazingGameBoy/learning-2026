// Array pehle se fixed ho:

// 12, 45, 7, 90, 23

// User se number lo:
// "found number: "

// Agar array mein ho:
// "Number found"

// warna:
// "Number not found"


#include <iostream>
using namespace std;

int main (){
    int number[5] = {12, 45, 7, 90, 23} , target;
    bool found = false;
    cout << "Enter a number: ";
    cin >> target;

    for(int i = 0 ; i < 5; i++){
        if(target == number[i]){
            found = true;
            break;
        }
    }
    if(found){
        cout << "Number found" << endl;
    }
    else{
        cout << "Number not found" << endl;
    }
    
    return 0;

}