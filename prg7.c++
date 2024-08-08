// 7. Factorial
// Program to calculate and display the factorial of any given number.

#include <iostream>
using namespace std;

// Recursion method
// int factorial(int n) {
//     if (n <= 1) return 1;
//     return n * factorial(n - 1);
// }

// Iterative method
int factorial(int n) {
    if (n <= 1) return 1;
    int res = 1;
    for (int i = 2; i <= n; i++) {
        res *= i;
    }
    return res;
}

int main() {
    int n;
    cout << "Enter a number to find its factorial: ";
    cin >> n;
    cout << "Factorial of " << n << " is " << factorial(n) << endl;
    return 0;
}
