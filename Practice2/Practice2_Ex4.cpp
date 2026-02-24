// Replace ___ with your code below
#include <iostream>
using namespace std;

int main() {
    double numbers[5];

    // get array input
    for (int i = 0; i < 5; ++i) {
        cin >> numbers[i];
    }

    // find the sum of all elements
    double sum = 0.0;
    for (int i = 0; i < 5; ++i) {
        sum = sum + numbers[i];
    }

    // find the average and print it
    cout << sum / 5.0;

    return 0;
}
