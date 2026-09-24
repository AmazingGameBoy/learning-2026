#include <iostream>

using namespace std;

int main() {
    int english , urdu , math , science, computer;

    cout << "Enter your English marks: ";
    cin >> english;
    cout << "Enter your Urdu marks : " ;
    cin >> urdu ;
    cout << "Enter your Math marks: " ;
    cin >> math;
    cout << "Enter your Science marks: " ;
    cin >> science;
    cout << "Enter your Computer marks: ";
    cin >> computer;

    float total_marks = 500;
    int obtain_marks = english + urdu + science + math + computer ;
    double Average = obtain_marks/5.0;
    double Percentage = (obtain_marks/total_marks)*100;

    cout << "You obtain " << obtain_marks << " marks" << endl;
    cout << "Your Average " << Average << endl;
    cout << "Your Percentage " << Percentage << "%" << endl;

    return 0;

}