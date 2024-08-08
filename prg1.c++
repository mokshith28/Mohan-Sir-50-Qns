// 1. Fibonacci series
// Program to display any given number of integers of the Fibonacci series.
// In the Fibonacci series, each number is equal to the sum of the two numbers that precede it.
// 0 1 1 2 3 5 8...

#include <iostream>
using namespace std;

void fibonacci(int n) {
    int a = 0, b = 1, next;
    for(int i = 0; i < n; i++) {
        if(i <= 1) next = i;
        else {
            next = a + b;
            a = b;
            b = next;
        }
        cout << next << " ";
    }
    cout << endl;
}

void fibonacce(int n) {
    
}

int main() {
    int n;
    cout << "Enter the number of Fibonacci numbers to generate: ";
    cin >> n;
    fibonacci(n);
    return 0;
}