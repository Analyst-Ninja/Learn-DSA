#include <iostream>
#include <climits>
using namespace std;

int main() {
    int arr[] = {1,2,22,3,1,1,1,1,56};
    int size = sizeof(arr)/sizeof(int);
    bool unique;

    for(int i = 0; i < size; i++) {
        unique = true;

        for (int j = 0; j < size; j++) {
            if (i != j && arr[i] == arr[j]) {
                unique = false;
            }
        }

        if (unique == true) {
            cout << arr[i] << " ";
        }
    } 

    cout << endl;

}    