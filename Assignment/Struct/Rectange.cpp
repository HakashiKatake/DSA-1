#include <iostream>
using namespace std;

struct Rectangle {
    float length;
    float width;
};

float area(Rectangle r) {
    return r.length * r.width;
}

int main() {
    Rectangle r;
    cout << "Enter length: ";
    cin >> r.length;
    cout << "Enter width: ";
    cin >> r.width;
    cout << "Area: " << area(r) << endl;
    return 0;
}
