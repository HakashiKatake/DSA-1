#include <iostream>
using namespace std;    

struct person {
    char name[50];
    int age;
    float height;
};

int main() {
    person p;
    cout << "Enter name: ";
    cin.getline(p.name, 50);
    cout << "Enter age: ";
    cin >> p.age;
    cout << "Enter height: ";
    cin >> p.height;
    cout << "Name: " << p.name << endl;
    cout << "Age: " << p.age << endl;
    cout << "Height: " << p.height << endl;
    return 0;
}