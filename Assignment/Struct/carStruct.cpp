//Define a structure Car with members:
//● brand (string)
//● price (float)
//In main(), create an array of 3 cars, input their details, and display all car information.

#include <iostream>
using namespace std;

struct Car {
    string brand;
    float price;
};

int main() {
    Car cars[3];

    for (int i = 0; i < 3; i++) {
        cout << "Enter brand for car " << i + 1 << ": ";
        cin >> cars[i].brand;
        cout << "Enter price for car " << i + 1 << ": ";
        cin >> cars[i].price;
    }

    cout << "Car information:" << endl;
    for (int i = 0; i < 3; i++) {
        cout << "Car " << i + 1 << ":" << endl;
        cout << "Brand: " << cars[i].brand << endl;
        cout << "Price: $" << cars[i].price << endl;
    }

    return 0;
}