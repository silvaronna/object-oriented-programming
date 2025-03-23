#include <iostream>
using namespace std;

int main () {

    string firstName = "";
    string lastName = "";
    string id = "";
    int grade = 0;

    cout << "Enter your First Name: ";
    cin >> firstName;
    cout << "Enter your Last Name: ";
    cin >> lastName;
    cout << "Enter your ID: ";
    cin >> id;
    cout << "Enter your Grade: ";
    cin >> grade;

    cout << "Name: " << firstName << " " << lastName << endl;
    cout << "ID: " << id << endl;
    cout << "Grade: " << grade << endl;

}