// Replace ___ with your code below
#include <iostream>
using namespace std;

// function definition to take double argument
void add_numbers(double n1, double n2) {
    // add two arguments and print the result
    cout << n1 + n2;
}

int main() {
    double number1;
    double number2;
    cin >> number1 >> number2;

    // call function with argument number1 and number2
    add_numbers(number1, number2);

    return 0;
}
