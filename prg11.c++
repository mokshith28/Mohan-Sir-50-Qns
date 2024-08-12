// Program to identify and print all repeated characters of a string.

#include <iostream>
#include <unordered_map>
using namespace std;

void printRepetitiveChars(const string &str) {
    unordered_map<char, int> frequency;
    for (char c : str) {
        frequency[c]++;
    }
    for (auto &pair : frequency) {
        if (pair.second > 1) {
            cout << "Character '" << pair.first << "' is repeated " << pair.second << " times.\n";
        }
    }
}

int main() {
    string str = "programming";
    printRepetitiveChars(str);
    return 0;
}
