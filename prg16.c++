// Program to determine whether a given year is a leap year or not.
#include <iostream>
using namespace std;

bool isLeapYear(int year) {
    if (year % 4 == 0) {
        if (year % 100 == 0) {
            if (year % 400 == 0)
                return true;
            else
                return false;
        }
        else
            return true;
    }
    else
        return false;
}

int main() {
    int year = 2024;
    if (isLeapYear(year))
        cout << year << " is a leap year.\n";
    else
        cout << year << " is not a leap year.\n";
    return 0;
}
