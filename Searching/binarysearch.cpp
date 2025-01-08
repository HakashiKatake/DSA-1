#include<iostream>
using namespace std;

//binary search

int main() {
    int a[] = {1,2,3,4,5};
    int left = 0;
    int right = sizeof(a) / sizeof(a[0]);
    int mid = (left + right) / 2;
    int target;
    cout<<"Enter the target";
    cin>>target;
    for (int i = 0; i < right; i++) {
        if (a[mid] == target) {
            cout << "Element found at index " << mid << endl;
            break;
        }
        else if (a[mid] > target) {
            right = mid - 1;
            mid = (left + right) / 2;
        }
        else {
            left = mid + 1;
            mid = (left + right) / 2;
        }
    }

}