//write a cpp program to read 10 int and store them in array A then it finds the even numbers to store them in array B and odd numbers to store them in array C

#include <iostream>
using namespace std;

int main() {
    
    int a[10],b[10],c[10];
    for(int i=0;i<10;i++){
        cout<<"Enter number "<<i+1<<endl;
        cin>>a[i];
        if(a[i]%2==0){
            b[i]=a[i];
        }
        else{
            c[i]=a[i];
        }
    }
    cout<<"The even numbers are ";
    for(int i=0;i<10;i++){
        cout<<b[i]<<" ";
    }
    cout<<endl;
    cout<<"The odd numbers are ";
    for(int i=0;i<10;i++){
        cout<<c[i]<<" ";
    }
    return 0;
}