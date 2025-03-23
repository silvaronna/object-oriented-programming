#include <iostream>
using namespace std;

class Student {
private:
    string firstname;
    string lastname;
    int id;
    char grade;

public:
    // Constructor Default
    Student() {
        firstname = "";
        lastname = "";
        id = 0;
        grade = ' ';
    }

    // Constructor dengan Parameter
    Student(string fn, string ln, int i, char g) {
        firstname = fn;
        lastname = ln;
        id = i;
        grade = g;
    }

    // Display function
    void display() {
        cout << "=======Result=======" << endl;
        cout << "Student first name: " << firstname << endl;
        cout << "Student last name: " << lastname << endl;
        cout << "Student ID: " << id << endl;
        cout << "Student Grade: " << grade << endl;
    }

    // Setter untuk mengisi nilai dari user
    void setStudentData() {
        cout << "Enter student first name: ";
        cin >> firstname;
        cout << "Enter student last name: ";
        cin >> lastname;
        cout << "Enter student ID: ";
        cin >> id;
        cout << "Enter student grade: ";
        cin >> grade;
    }
};

int main() {
    Student data;
    data.setStudentData();
    data.display();

    return 0;
}
