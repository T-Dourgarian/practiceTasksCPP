// Replace ___ with your code
#include <iostream>
using namespace std ;

// parent class Person
class Person {
protected :
    int marks;
public :
    string name;
};
// inherit Student class from Person
// using private inheritance

class Student : private Person {
public :
    // setter function for name
    void set_name(string n) {
        name = n;
    }
    // getter function for name
    string get_name() {
        return name;
    }
    // setter function for marks
    void set_marks(int m) {
        marks = m;
    }
    // getter function for marks
    int get_marks() {
        return marks;
    }
};

int main() {
    // create Student object
    Student student ;
    // call set_name () function
    // pass "Tom Araya" as argument
    student.set_name("Tom Araya");
    // call set_marks () function
    // pass 97 as argument
    student.set_marks(97);
    // call getter function for name
    cout << student.get_name() << endl ;
    // call getter function for marks
    cout << student.get_marks() << endl ;
    return 0;
}
