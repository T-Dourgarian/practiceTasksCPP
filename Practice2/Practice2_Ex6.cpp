// Replace ___ with your code below
#include <iostream>
using namespace std;

// function to find the smallest element
int find_smallest(int numbers[]) {
    int smallest = numbers[0];
    for (int i = 1; i < 5; ++i) {
        if (numbers[i] < smallest) {
            smallest = numbers[i];
        }
    }
    return smallest;
}

int main() {
    // an array of numbers
    int numbers[5] = {55, 64, 45, 80, 65};

    // call the function to find the smallest element
    int smallest = find_smallest(numbers);
    cout << smallest;

    return 0;
}
