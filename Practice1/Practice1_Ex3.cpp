#include <iostream>
using namespace std;

int arithmetic_operators(int number) {
    int original_number{ number };
    //----WRITE YOUR CODE BELOW THIS LINE----

    //-- Multiply number by 2 and assign the result back to number

    //-- Add 9 to number and assign the result back to number

    //-- Subtract 3 from number and assign the result back to number

    //-- Divide number by 2 and assign the result back to number

    //-- Subtract original_number from number and assign the result back to number

    //-- Take the modulus 3 (%) of number and assign it back to number
    number = number * 2;
    number = number + 9;
    number = number - 3;
    number = number / 2;
    number = number - original_number;
    number = number % 3;
    //----WRITE YOUR CODE ABOVE THIS LINE----
    return number;
}

// i couldnt compile or execute without main funciton
int main() {
  arithmetic_operators(3);
  return 0;
}