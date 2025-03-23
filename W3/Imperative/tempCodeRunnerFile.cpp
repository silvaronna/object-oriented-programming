#include <iostream>
using namespace std;

int main() {

    int a, b;
    cout << "Enter first numbers: ";
    cin >> a;
    cout << "Enter second numbers: ";
    cin >> b;
    cout << "===========Result==========" << endl;

    int add = a + b;
    int subtract = a - b;
    int multiply = a * b;
    double divide = (double)a / b;

    cout << a << " + " << b << " = " << add << endl;
    cout << a << " - " << b << " = " << subtract << endl;
    cout << a << " x " << b << " = " << multiply << endl;
    cout << a << " : " << b << " = " << divide << endl;
    return 0;

}