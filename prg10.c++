// 10. Printing patterns
// Program to print a given pattern composed of ASCII characters.
// The solution is required to employ an effective algorithm, as opposed to directly printing the pattern as it is.

#include <iostream>
using namespace std;

void printPattern(int n) {
    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= i; j++) {
            cout << "* ";
        }
        cout << endl;
    }
}

int main() {
    int rows;
    cout << "Enter the number of rows for the pattern:\n";
    cin >> rows;
    printPattern(rows);
    return 0;
}
