#include <iostream>
using namespace std;

void insertionSort(int arr[], int n) {
    for (int i = 1; i < n; i++) {
        int key = arr[i];
        int j = i -1;

        while (j>=0 && arr[j] > key) {
            arr[j+1] = arr[j];
            j--;
        }

        arr[j+1] = key;
    }
}
 

int main() {
    int arr[] = {};
    int n = sizeof(arr) / sizeof(arr[0]);
    cout<<"Enter the elements of the array: ";
    for (int i = 0; i < n; i++) {
        cin>>arr[i];
    }
    insertionSort(arr, n);
    cout << "Sorted array: \n";
    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;
    return 0;
}
    





