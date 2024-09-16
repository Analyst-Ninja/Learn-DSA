#include <iostream>
using namespace std;

void printArr(int arr[], int size) {
    
    for(int i = 0; i < size; i++) {
        cout << arr[i] << " ";
    } 
    cout << endl;
}

int main() {
    int arr[5] = {1,2,3,4,5};

    int arrSize = sizeof(arr)/sizeof(int);
    int start = 0;
    int end = arrSize - 1;

    cout << "Original Array:- ";
    printArr(arr, arrSize);

    while(start < end) {
        swap(arr[start], arr[end]);
        start++; 
        end--;
    }

    cout << "Reversed Array:- ";
    printArr(arr, arrSize);

}