#include <iostream>
using namespace std;

class Calculator {
public:
    int add(int a, int b) { return a + b; }
    int subtract(int a, int b) { return a - b; }
    int multiply(int a, int b) { return a * b; }
    double divide(int a, int b) { return (double)a / b; }
};

int main() {
    Calculator calc;
    int a, b;
    cout << "Enter first numbers: ";
    cin >> a;
    cout << "Enter second numbers: ";
    cin >> b;
    cout << a << " + " << b << " = " << calc.add(a, b) << endl;
    cout << a << " - " << b << " = " << calc.subtract(a, b) << endl;
    cout << a << " x " << b << " = " << calc.multiply(a, b) << endl;
    cout << a << " : " << b << " = " << calc.divide(a, b) << endl;
    return 0;
}
