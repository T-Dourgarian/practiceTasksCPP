// Replace ___ with your code below
#include <iostream>
using namespace std;

int main() {
    // get input value for num
    int num;
    cin >> num;

    // assign address of num to pt pointer
    int* pt = &num;

    // print value of num using pt
    cout << *pt;

    return 0;
}
