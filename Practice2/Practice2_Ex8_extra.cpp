// Replace ___ with your code below
#include <iostream>
using namespace std;

int main() {
    string text1 = "Elden";
    string text2 = "Ring";

    // concatenate text1, empty space, and text2
    string game = text1 + " " + text2;

    // iterate through the string and print each character
    for (int i = 0; i < game.length(); ++i) {
        cout << game[i];
    }

    return 0;
}
