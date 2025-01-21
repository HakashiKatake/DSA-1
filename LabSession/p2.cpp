#include <iostream> // cin, cout importing
using namespace std; // using std namespace

class ArrayRotation {
public:
    
    void leftRotate(int arr[], int size, int positions) { //function for left rotation
       
        if (size == 0 || positions == 0) return; // Handle edge cases
        positions = positions % size;  // Normalize positions
        
        
        int temp[positions]; // Temporary array to hold rotated elements
        for (int i = 0; i < positions; i++) { // Copy elements
            temp[i] = arr[i]; // Copy elements
        }
        
        
        for (int i = positions; i < size; i++) { //  forloop Shift elements
            arr[i - positions] = arr[i]; // Shift elements
        }
   
        for (int i = 0; i < positions; i++) { // Copy rotated elements
            arr[size - positions + i] = temp[i]; // Copy rotated elements
        }
    }


    void rightRotate(int arr[], int size, int positions) { //function for right rotation

        if (size == 0 || positions == 0) return; // Handle edge cases
        positions = positions % size;  // Normalize positions
        
     
        leftRotate(arr, size, size - positions); // Rotate left
    }
    
    
    void printArray(int arr[], int size) { //function to print the array
        for (int i = 0; i < size; i++) {
            cout << arr[i] << " ";
        }
        cout << endl;
    }
};

int main() {
    ArrayRotation rot;
    int arr[] = {1, 2, 3, 4, 5};
    int size = 5;
    
    cout << "Original: ";
    rot.printArray(arr, size); 
    
    rot.leftRotate(arr, size, 2);
    cout << "Left rotate by 2: ";
    rot.printArray(arr, size); 
    
    rot.rightRotate(arr, size, 2);
    cout << "Right rotate by 2: ";
    rot.printArray(arr, size); 
    
    return 0;
}