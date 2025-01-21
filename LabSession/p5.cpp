#include <iostream> //header
using namespace std; //namespace

class Student { //class of student
private: //private access specifier
    string name; //string variable name
    int score; //integer variable score

public: //public access specifier
   
    Student(string n = "", int s = 0) { //constructor of Student class
        name = n; //initialize name to n
        score = s;  //initialize score to s
    }


    bool operator<(const Student& other) const { //overloading operator < for Student class
        return score < other.score; //return true if score of current object is less than score of other object
    }

    // Getters
    string getName() { return name; }  //function to get name
    int getScore() { return score; } //function to get score
};


void selectionSort(Student arr[], int size) { //function to sort students
    for (int i = 0; i < size - 1; i++) { //for loop to iterate through array
        int min_idx = i; //initialize min_idx to i
      
        for (int j = i + 1; j < size; j++) { //for loop to iterate through array
            if (arr[j] < arr[min_idx]) { //if element at j is less than element at min_idx
                min_idx = j; // min_idx is j
            }
        }
      
        if (min_idx != i) { //if min_idx is not equal to i
            Student temp = arr[i]; //initialize temp to element at i
            arr[i] = arr[min_idx]; //element at i is element at min_idx
            arr[min_idx] = temp; //element at min_idx is temp
        }
    }
}

int main() {
   
    const int SIZE = 5; //constant integer SIZE is 5
    Student students[SIZE] = { //array of students
        Student("Alice", 85), //initialize student Alice
        Student("Bob", 92), //initialize student Bob
        Student("Charlie", 78), //initialize student Charlie
        Student("David", 95), //initialize student David
        Student("Eve", 88) //initialize student Eve
    };

    selectionSort(students, SIZE); //sort students

    
    cout << "Sorted students by score:" << endl; //print message
    for (int i = 0; i < SIZE; i++) { //for loop to iterate through array
        cout << students[i].getName() << ": "  //print name and score of student
             << students[i].getScore() << endl;//print name and score of student
    } 

    return 0;
}