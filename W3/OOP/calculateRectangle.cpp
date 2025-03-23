#include <iostream>
using namespace std;


class Rectangle {
    private:
        int width;
        int height;
    public:
        void setWidth(int w) {
            width = w;
        }
        void setHeight(int h) {
            height = h;
        }
        int getArea() {
            return width * height;
        }
};

int main() {
    Rectangle rect;
    int width, height;

    cout << "Enter the width of the rectangle: ";
    cin >> width;
    rect.setWidth(width);

    cout << "Enter the height of the rectangle: ";
    cin >> height;
    rect.setHeight(height);

    cout << "Area: " << rect.getArea() << endl;

    return 0;
}
