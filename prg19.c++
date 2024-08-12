// Program to print any given number with the digits in reverse order.
#include <iostream>
using namespace std;

int reverseNumber(int n) {
    int reversed = 0;
    while (n != 0) {
        int digit = n % 10;
        reversed = reversed * 10 + digit;
        n /= 10;
    }
    return reversed;
}

int main() {
    int n = 12345;
    cout << "Reversed number: " << reverseNumber(n) << endl;
    return 0;
}
