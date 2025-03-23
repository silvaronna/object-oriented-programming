#include <iostream>
#include <cmath>

using namespace std;

class Point {
private:
    double x, y;

public:
    // Constructor 
    Point(double xVal, double yVal) {
        x = xVal;
        y = yVal;
    }

    // Method 
    double distanceFromOrigin() {
        return sqrt(x * x + y * y);
    }

    // Method titik
    void displayPoint() {
        cout << "Point(" << x << ", " << y << ")" << endl;
    }
};

int main() {
    double x, y;
    
    // input user
    cout << "Enter x coordinate: ";
    cin >> x;
    cout << "Enter y coordinate: ";
    cin >> y;

    // objek Point
    Point p(x, y);
    
    // Menampilkan titik
    p.displayPoint();

    cout << "Distance from origin: " << p.distanceFromOrigin() << endl;

    return 0;
}
