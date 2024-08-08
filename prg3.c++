// 3. String palindrome
// Program to verify whether a given string is a palindrome or not.
// A string is a palindrome if it is equal to the reverse of itself.

#include <iostream>
using namespace std;

bool isPalindrome(string s) {
    int len;
    for (len = 0; s[len] != '\0'; len++);
    for (int i = 0; i < len/2; i++) {
        if (s[i] != s[len-1-i]) return false;
    }
    return true;
}

int main() {
    string s;
    cout << "Enter a string to check if it is a palindrome: ";
    cin >> s;
    if (isPalindrome(s)) {
        cout << s << " is a palindrome." << endl;
    } else {
        cout << s << " is not a palindrome." << endl;
    }
    return 0;
}
