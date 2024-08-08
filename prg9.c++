// 9. Removing repeated elements from an array
// Program to identify and remove all repeated elements from an array.
// Arrays could be of various types like integer, character or string.

#include <iostream>
#include <unordered_set>
using namespace std;

void removeDuplicates(int arr[], int &n) {
    unordered_set<int> seen;
    int j = 0;
    for (int i = 0; i < n; i++) {
        if (seen.find(arr[i]) == seen.end()) {
            seen.insert(arr[i]);
            arr[j++] = arr[i];
        }
    }
    n = j;
}

void printArray(int arr[], int n) {
    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;
}

int main() {
    int arr[] = {1, 2, 3, 3, 4, 5, 6, 5};
    int n = sizeof(arr) / sizeof(arr[0]);

    cout << "Original array: ";
    printArray(arr, n);

    removeDuplicates(arr, n);

    cout << "Array with duplicates removed: ";
    printArray(arr, n);

    return 0;
}
