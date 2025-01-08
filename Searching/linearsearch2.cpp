#include<iostream>
using namespace std;


int linearSearch(int arr[], int size, int target) {
    for (int i = 0; i < size; i++) {
        if (arr[i] == target) {
            return i;
        }
    }
    return -1;
}

int main() {
    int arr[] = {1, 2, 3, 4, 5,6};
    int size = sizeof(arr) / sizeof(arr[0]);
    int target;
    cout<<"Enter the target";
    cin>>target;
    int index = linearSearch(arr, size, target);
    if (index == -1) {
        cout << "Element not found" << endl;
    }
    else {
        cout << "Element found at index " << index << endl;
    }
    return 0;
    
}