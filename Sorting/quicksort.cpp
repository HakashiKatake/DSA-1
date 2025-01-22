//quick sort

#include <iostream>
using namespace std;

class Student {
private:
    string name;
    int score;

public:
    Student(string n = "", int s = 0) {
        name = n;
        score = s;
    }

    bool operator<(const Student& other) const {
        return score < other.score;
    }

    string getName() { return name; }
    int getScore() { return score; }
};

void quickSort(Student arr[], int low, int high) {
    if (low < high) {
        int pi = partition(arr, low, high);

        quickSort(arr, low, pi - 1);
        quickSort(arr, pi + 1, high);
    }
}

int partition(Student arr[], int low, int high) {
    Student pivot = arr[high];
    int i = low - 1;

    for (int j = low; j < high; j++) {
        if (arr[j] < pivot) {
            i++;
            swap(arr[i], arr[j]);
        }
    }

    swap(arr[i + 1], arr[high]);
    return i + 1;
}