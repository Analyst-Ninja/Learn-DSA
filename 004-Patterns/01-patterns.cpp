#include <iostream>
using namespace std;

int main() {
    // Inverted Triangle with number same in a row but increasing by each row
    // Alternative
    int n = 5;

    for (int i = 0; i < n; i++) {

        // spaces
        for (int j = 0; j < i; j++) {
            cout << " ";
        }
        // nums
        for (int k = 0; k < n-i; k++) {
            cout << i+1;
        }
        cout << endl;
    }

};
