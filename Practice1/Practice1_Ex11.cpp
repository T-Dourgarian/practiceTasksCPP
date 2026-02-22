#include <iostream>
using namespace std;

int main() {
    int number;
    int total = 0;

    while (true) {
        cin >> number;
        if (number == 0)
            break;
        if (number < 0)
            continue;
        total += number;
    }

    cout << total;
    return 0;
}
