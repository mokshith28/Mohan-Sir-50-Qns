// Program to identify and print the first unique character in any given string.
#include <iostream>
#include <unordered_map>
using namespace std;

char firstUniqueChar(const string &str) {
    unordered_map<char, int> frequency;
    for (char c : str) {
        frequency[c]++;
    }
    for (char c : str) {
        if (frequency[c] == 1) {
            return c;
        }
    }
    return '\0'; // If no unique character is found
}

int main() {
    string str = "swiss";
    char result = firstUniqueChar(str);
    if (result)
        cout << "The first unique character is: " << result << endl;
    else
        cout << "No unique character found.\n";
    return 0;
}
