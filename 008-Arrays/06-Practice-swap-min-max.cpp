#include <iostream>
#include <climits>
using namespace std;

int main() {
    int arr[5] = {1,2,5,3,4};
    int arrSize = sizeof(arr)/sizeof(int);
    int min = INT_MAX;
    int max = INT_MIN;
    int minIndex = -1;
    int maxIndex = -1;

    for(int i = 0; i < arrSize; i++) {
        if(arr[i] < min) {
            min = arr[i];
            minIndex = i;
        }

        if(arr[i] > max) {
            max = arr[i];
            maxIndex = i;
        }
    }

    swap(arr[minIndex], arr[maxIndex]);

    cout << "Changed Array: - ";
    for(int i = 0; i < arrSize; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;
}