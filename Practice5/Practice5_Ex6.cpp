// Replace ___ with your code
#include <iostream>
using namespace std ;
class Person {
public :
    // create virtual function activity()
    // print "Human Activity"
    virtual void activity() {
        cout << "Human Activity" << endl ;
    }
};
// derive Programmer class
class Programmer : public Person {
public :
    // create overriding function activity()
    // print "Coding"
    void activity() {
        cout << "Coding" << endl ;
    }
};
int main() {
    // create Programmer object prog
    Programmer prog;
    // create Person pointer person
    // point to prog object
    Person *person = &prog;
    // call the activity() function using person
    person->activity();
    return 0;
}
