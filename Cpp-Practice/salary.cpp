#include <iostream>

using namespace std;

int main() {
    int basic_salary , bouns , tax;

    cout << "Enter your Basic Salary : " ;
    cin >> basic_salary;
    cout << "Enter your Bonus :" ;
    cin >> bouns;
    cout << "Enter Tax : " ;
    cin >> tax;

    int final_salary = basic_salary + bouns - tax;

    cout << "Your final salary is : " << final_salary ;

    return 0;

}

