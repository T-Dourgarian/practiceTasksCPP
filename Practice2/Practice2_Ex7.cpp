// Replace ___ with your code below
#include <iostream>
using namespace std;

int main() {
    // an array of numbers
    int numbers[4] = {43, 78, 23, 45};

    // declare new array of the same size
    int new_numbers[4];

    // loop through each element of numbers and multiply them
    for (int i = 0; i < 4; ++i) {
        new_numbers[i] = numbers[i] * 10;
    }

    // print the new array using another loop
    for (int i = 0; i < 4; ++i) {
        cout << new_numbers[i] << endl;
    }

    return 0;
}
