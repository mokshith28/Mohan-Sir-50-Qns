// 5. Armstrong number
// Program to verify whether a given number is an Armstrong number.
// An Armstrong number is equal to the sum of the cubes of its digits.
// abcd = a^n + b^n + c^n + d^n

#include <iostream>
using namespace std;

bool isArmstrong(int n) {
    int original = n, sum = 0;
    while (n != 0) {
        int remainder = n % 10;
        sum += remainder * remainder * remainder;
        n /= 10;
    }
    return original == sum;
}

int main() {
    int n;
    cout << "Enter a 3-digit number to check if it is an Armstrong number: ";
    cin >> n;
    if (isArmstrong(n)) {
        cout << n << " is an Armstrong number." << endl;
    } else {
        cout << n << " is not an Armstrong number." << endl;
    }
    return 0;
}
