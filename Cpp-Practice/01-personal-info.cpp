#include <iostream>
#include <string>

using namespace std;

int main(){
    string name , city;
    int age ;
    char grade ;

    cout << "Enter your name: " << endl;
    cin >> name;
    cout << "Enter your age: " << endl;
    cin >> age;
    cout << "Enter your city: " << endl;
    cin >> city;
    cout << "Enter your Grade: " << endl;
    cin >> grade;

    cout << "your name is: " << name << endl;
    cout << "Your age is: " << age << endl;
    cout << "Your city is: " << city << endl;
    cout << "Your Grade is: " << grade << endl;

    return 0;
}