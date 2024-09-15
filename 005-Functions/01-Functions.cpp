#include <iostream>
using namespace std;

// DRY Principle -> Don't Repeat Yourself
// Functions are used
    // - To reduce redundancy 
    // - To improve Code Readability

// Print Hello Function
void printHello() {
    cout << "Hello" << endl;
}

// Sum of 2 numbers
int sum2Nums(int a, int b) {

    return a+b;
}

// Min of 2 numbers
int minOfTwo(int a, int b) { // Parameters

    // Using Ternary Operator
    return ((a < b) ? a : b);
}

// Function to get the sum of N natural numbers
int sumOfNums(int N) {

    int sum = 0;

    for(int i = 1; i <= N; i++) {
        sum += i;
    }

    return sum;
}

// Function to get the Factorial of N / N!
int factorial(int N) {

    int prod = 1;

    if (N == 0) {
        return 1;
    } else {
        for(int i = 1; i <= N; i++) {
            prod *= i;
        }
        return prod;
    }
}

int main() {
    // Function Call/ Invoke
    printHello();
    printHello();
    printHello();
    printHello();
    printHello();

    // Sum Function Invoke
    cout << "Sum = " << sum2Nums(5,6) << endl; // Arguements

    // minOfTwo Function Invoke
    cout << "Min = " << minOfTwo(5,6) << endl;

    // sumOfNums Function Invoke
    cout << "Sum of N Natural Numbers = " << sumOfNums(10) << endl;

    // Factorial Function Invoke
    cout << "Factorial of N = " << factorial(6) << endl;

    return 0;
}