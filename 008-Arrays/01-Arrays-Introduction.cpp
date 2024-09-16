#include <iostream>
using namespace std;

int main() {

    int marks[5];

    // marks[0] = 101;

    // cout << marks[0] << endl;
    // cout << marks[1] << endl;
    // cout << marks[2] << endl;
    // cout << marks[3] << endl;
    // cout << marks[4] << endl;

    // Access the array within its size
    // cout << marks[100] << endl; // Gives the Garbage Value 

    // loops
    int sz = sizeof(marks); // It will give the total size in bytes
    int arrSize;
    arrSize = sz / sizeof(int); // It will give the total num of element it holds
    cout << arrSize << endl;

    for(int i=0; i < arrSize; i++) {
        cin >> marks[i];
    }

    for(int i=0; i < arrSize; i++) {
        cout << marks[i] << endl;
    }
    
}