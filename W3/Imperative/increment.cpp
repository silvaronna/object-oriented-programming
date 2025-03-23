#include <iostream>
using namespace std;

class Counter {
private:
    int count;

public:
    Counter() {
        count = 0;
    }

    void increment() {
        count++;
    }

    int getCount() {
        return count;
    }

    void setCount() {
        cout << "Enter count: ";
        cin >> count;
    }

    void displayCount() {
        cout << "Current count: " << count << endl;
    }
};

int main() {
    Counter myCounter;

    myCounter.setCount();
    myCounter.increment();
    myCounter.increment();
    myCounter.displayCount();

    return 0;
}