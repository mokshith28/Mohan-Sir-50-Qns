// 8. Reversing strings
// Program to reverse the order of characters in any given string.

#include <iostream>
#include <string>
using namespace std;

string reverseString(string s) {
    for (int i = 0; i < s.length()/2; i++) {
        swap(s[i], s[s.length()-1-i]);
    }
    return s;
}

int main() {
    string s;
    cout << "Enter a string to reverse: ";
    cin >> s;
    cout << "Reversed string: " << reverseString(s) << endl;
    return 0;
}
