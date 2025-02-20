//write a program to implement binary search on sorted array
//input [5,10,15,20,25]


#include <iostream>
using namespace std;

int binarySearch(int arr[], int size, int target);

int main() {
    int arr[] = {5, 10, 15, 20, 25};
    int size = sizeof(arr) / sizeof(arr[0]);
    int target;
    
    cout << "Enter the target: ";
    cin >> target;
    
    int index = binarySearch(arr, size, target);
    
    if (index == -1) {
        cout << "Element not found" << endl;
    } else {
        cout << "Element found at index " << index << endl;
    }
    
    return 0;
}

int binarySearch(int arr[], int size, int target) {
    int left = 0;
    int right = size - 1;
    
    while (left <= right) {
        int mid = left + (right - left) / 2;
        
        if (arr[mid] == target) {
            return mid;
        } else if (arr[mid] < target) {
            left = mid + 1;
        } else {
            right = mid - 1;
        }
    }
    
    return -1;
}