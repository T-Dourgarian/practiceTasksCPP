#include <iostream>
using namespace std;

int main() {
    int year;
    cin >> year;

    // better method from lecture
    //  // if a year is divisible by 4 and not divisible by 100
    // // or year is divisible by 400, it's a leap year
    // if ((year % 4 == 0 && year % 100 != 0) || year % 400 == 0) {
    //     cout << "Leap Year";
    // }
 
    // // all other remaining years are not a leap year
    // else {
    //     cout << "Not a Leap Year";
    // }

    bool is_leap = false;
    if (year % 4 == 0) {
        if (year % 100 == 0) {
            if (year % 400 == 0)
                is_leap = true;
            else
                is_leap = false;
        } else {
            is_leap = true;
        }
    } else {
        is_leap = false;
    }

    if (is_leap)
        cout << "Leap year";
    else
        cout << "Not a leap year";

    return 0;
}
