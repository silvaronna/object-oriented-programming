#include <iostream>
#include <cmath>

using namespace std;

int main() {

double x, y;

cout << "Enter x coordinate: ";
cin >> x;
cout << "Enter y coordinate: ";
cin >> y;
cout << "===========Result==========" << endl;


int distancefromorigin = sqrt(x * x + y * y);

cout << "Distance from origin: " << distancefromorigin << endl;
}