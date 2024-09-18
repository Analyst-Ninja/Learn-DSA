#include <iostream>
using namespace std;

int main() {
    int arr1[] = {1,2,3,4,7}; 
    int arr2[] = {11,100,4,7,1};
    bool isUnique;

    for (int i = 0; i < (sizeof(arr1)/sizeof(int)); i++) {
        isUnique = true;
        for (int j = 0; j < (sizeof(arr2)/sizeof(int)); j++) {
            if (arr1[i] == arr2[j]) {
                cout << arr1[i] << " ";
            }
        }
    } 
    cout << endl;

}