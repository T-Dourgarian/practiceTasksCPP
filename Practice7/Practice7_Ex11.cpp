// Replace ___ with your code
#include <iostream>
using namespace std;


// create enum to store names
// create name1 variable outside the enum definition

enum names{
    Marcia,
    Hernando,
    Jose
} name1;


int main() {
    // create another variable of names type
    names name2;
    // assign Marcia to name1
    name1 = Marcia;
    // assign Jose to name2
    name2 = Jose;
    // print the enum variables
    cout << name1 << endl << name2;
    return 0;
}
