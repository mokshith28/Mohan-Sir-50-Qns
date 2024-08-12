// 35. Program to reverse the order of characters in any given string in place.
#include <iostream>
#include <string>
using namespace std;

void reverseString(string &str) {
    int n = str.length();
    for (int i = 0; i < n / 2; i++) {
        swap(str[i], str[n - i - 1]);
    }
}

int main() {
    string str = "HelloWorld";
    reverseString(str);
    cout << "Reversed string: " << str << endl;
    return 0;
}
