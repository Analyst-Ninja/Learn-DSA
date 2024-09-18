#include <iostream>
using namespace std;

int main() {
    int arr[5] = {1,2,5,3,4};
    int sum = 0;
    int mul = 1;

    int arrSize = sizeof(arr)/sizeof(int);

    for(int i = 0; i < arrSize; i++) {
        sum += arr[i];
        mul *= arr[i];
    }

    cout << "Sum of Elements " << sum << endl;
    cout << "Product of Elements " << mul << endl;
}