#include <iostream>
using namespace std;

template<typename T> //creating the template
int linearSearch(T arr[], int size, T key) { //linear search fun
   
    for (int i = 0; i < size; i++) { //forloop to check for the element
        if (arr[i] == key) { //finding the correct key
            return i; //returning the key
        }
    }
    
    return -1; // Return -1 if key not found
}

int main() {
    
    int intArr[] = {5, 2, 8, 1, 9}; //array 
    int intKey = 8; //defining the key
    int intResult = linearSearch(intArr, 5, intKey); //using the linearsearch fun
    cout << "Integer " << intKey << " found at: " << intResult << endl; //prints the output

  
    double doubleArr[] = {1.5, 2.3, 5.7, 8.9}; //double array
    double doubleKey = 5.7; //key
    int doubleResult = linearSearch(doubleArr, 4, doubleKey); //using the linearsearch fun
    cout << "Double " << doubleKey << " found at: " << doubleResult << endl; //printing the output

   
    char charArr[] = {'a', 'b', 'c', 'd'}; //char array
    char charKey = 'c'; //key
    int charResult = linearSearch(charArr, 4, charKey); ////using the linearsearch fun
    cout << "Char " << charKey << " found at: " << charResult << endl; //printing the output

    return 0;
}