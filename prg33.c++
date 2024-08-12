// 33. Program to print the transpose of a given matrix.
#include <iostream>
using namespace std;

void transpose(int A[][3], int B[][3], int n) {
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            B[i][j] = A[j][i];
        }
    }
}

int main() {
    int A[3][3] = {{1, 2, 3}, {4, 5, 6}, {7, 8, 9}};
    int B[3][3];
    transpose(A, B, 3);

    cout << "Transpose of the matrix is: " << endl;
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            cout << B[i][j] << " ";
        }
        cout << endl;
    }
    return 0;
}
