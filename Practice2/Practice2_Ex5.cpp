// Replace ___ with your code below
#include <iostream>
using namespace std;

int main() {
    double numbers[5] = {32.2, 43.5, 51.6, 11.3, 29.8};
    double sum = 0;

    // find the sum of all array elements
    for (double n : numbers) {
        sum = sum + n;
    }

    // find the average number
    double average = sum / 5;
    cout << average;

    return 0;
}
