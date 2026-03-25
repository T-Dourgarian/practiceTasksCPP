// Replace ___ with your code
#include <iostream>
using namespace std;

// create enum to store meat types
// create meat1 variable outside the enum definition
enum meat {
    Chicken,
    Beef,
    Pork,
    Lamb
} meat1;

int main() {
    // create another variable of meat type
    meat meat2;
    // assign Beef to meat1
    meat1 = Beef;
    // assign Pork to meat2
    meat2 = Pork;
    // print the enum variables
    cout << meat1 << endl << meat2;
    return 0;
}
