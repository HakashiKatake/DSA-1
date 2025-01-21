#include <iostream> // cin, cout importing
using namespace std; // using std namespace

int main() { //main function
    int size; //this defines the size of the array
    cout << "Enter size: "; //this prints "Enter size"
    cin >> size; //this takes the input from the user

    int* arr = new int[size];  // allocate array
    

    for (int i = 0; i < size; i++) { //for loop for the array
        cout << "arr[" << i << "]: "; //printing the array
        cin >> arr[i]; //taking the array elements
    }
    
    
    int sum = 0; //intilizing the sum
    for (int i = 0; i < size; i++) { //forloop for the sum
        sum += arr[i]; //adding the elements
    }
    double avg = double(sum) / size; //defining the average
    
    cout << "Sum: " << sum << "\nAverage: " << avg << endl; //printing the sum and average
    
    delete[] arr;  // deallocate memory
    return 0;
}