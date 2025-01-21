#include <iostream> //header file
using namespace std; //namespace

class BinarySearch {  //class of binary search
public: //public access specifier
    int search(int arr[], int size, int key) { //function to search the element
      
        if (size <= 0) { //if size is less than or equal to 0
            cout << "Error: Empty array" << endl; //print error message
            return -1; //return -1
        }

        
        if (!isSorted(arr, size)) { //if array is not sorted
            cout << "Error: Array must be sorted" << endl; //print error message
            return -1; //return -1
        }

        
        int left = 0; //initialize left to 0
        int right = size - 1; //initialize right to size - 1
 
        while (left <= right) { //while left is less than or equal to right
            int mid = left + (right - left) / 2; //initialize mid to left + (right - left) / 2

           
            if (arr[mid] == key) { //if element at mid is equal to key
                return mid; //return mid
            }
            
            
            if (arr[mid] < key) { //if element at mid is less than key
                left = mid + 1; //left is mid + 1
            }
           
            else { //else
                right = mid - 1; //right is mid - 1
            }
        }

        return -1;  // Element not found
    }

private: //private access specifier
   
    bool isSorted(int arr[], int size) { //function to check if array is sorted
        for (int i = 1; i < size; i++) { //for loop to iterate through array
            if (arr[i] < arr[i-1]) return false; //if element at i is less than element at i-1, return false
        }
        return true;
    }
};

int main() {
    BinarySearch bs; //object of BinarySearch class
    

    int arr[] = {1, 2, 3, 4, 5}; //initialize array
    int key = 3; //initialize key
    
    int result = bs.search(arr, 5, key); //search for key in array
    
    if (result != -1) { //if element is found
        cout << "Element " << key << " found at index: " << result << endl; //print element found at index
    } else {
        cout << "Element " << key << " not found" << endl; //print element not found
    }

    return 0;
}