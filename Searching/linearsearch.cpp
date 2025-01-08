#include<iostream>
using namespace std;

int main() {
    //linear search algorithm 
    //LSEARCH(A,N,ITEM)
    //1. loc = -1
    //2. i = 1
    //3. repeat while i < N, a[i] != item
    //4. if a[i] == item then
    //    loc = i
    //Return Loc
    
    int arr[10] = {1,2,3,4,5,6,7,8,9,10};
    int item = 7;
    int loc = -1;
    int i = 0;
    for (i = 0; i < 10; i++) {
        if (arr[i] == item) {
            loc = i;
            break;
        }
    }
    if (loc == -1) {
        cout << "Item not found" << endl;
    }
    else {
        cout << "Item found at index " << loc << endl;
    }
    
    return 0;



    


}

