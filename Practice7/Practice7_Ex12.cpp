// Replace ___ with your code
#include <iostream>
using namespace std;

// create the seasons enum along with the season1 variable
enum seasons {
    spring,
    // assign the integer - 2 to summer
    summer = -2,
    autumn,
    winter
} season1;

int main() {
    // assign spring to season1 variable and print it
    season1 = spring;
    cout << season1 << endl ;
    // change value of season1 to summer and print it
    season1 = summer;
    cout << season1 << endl ;
    // change value of season1 to autumn and print it
    season1 = autumn;
    cout << season1 << endl ;
    // change value of season1 to winter and print it 
    season1 = winter;
    cout << season1 << endl ;
    return 0;
}
