// Replace ___ with your code
#include <iostream>
using namespace std ;
class Company {
public :
    // declare a static variable
    static string name;
    // create a static function
    static void print_name() {
        cout << name << endl ;
    }
};
// define the static variable
string Company::name;
int main() {
    // get user input for static variable name
    getline (cin, Company::name);
    // call the static function
    Company::print_name();
    return 0;
}
