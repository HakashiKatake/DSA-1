//take 10 array input and print


#include<iostream>
using namespace std;
int main(){
    int arr[10];
    cout<<"Enter 10 numbers"<<endl;
    for(int i=0;i<10;i++){
        cin>>arr[i];
    }
    for(int i=0;i<10;i++){
        cout<<endl;
        cout<<"The number at index "<<i<<" is " <<arr[i]<<endl;
        
    }
    return 0;
}