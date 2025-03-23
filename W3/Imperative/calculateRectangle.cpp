#include <iostream>
using namespace std;

int main() {
    int length, width;
    cout << "Enter the length of the rectangle: ";
    cin >> length;
    cout << "Enter the width of the rectangle: ";
    cin >> width;
    cout << "===========Result==========" << endl;

    int area = length * width;

    cout << "Area: " << area << endl;

    return 0;
}