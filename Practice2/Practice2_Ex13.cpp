// Replace ___ with your code below
#include <iostream>
using namespace std;

int main() {
    // an array of numbers
    int numbers[5] = {64, 55, 75, 80, 65};

    // assign the first value of the array to the smallest variable
    int smallest = *(numbers);

    // for loop from i = 1 to i = 4
    for (int i = 1; i < 5; ++i) {
        // if ith element is smaller than smallest
        if (*(numbers + i) < smallest) {
            smallest = *(numbers + i);
        }
    }

    // print the smallest variable
    cout << smallest;

    return 0;
}
