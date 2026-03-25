// Replace ___ with your code
#include <iostream>
using namespace std ;
// parent class Person
class Person {
private :
    int id;
protected :
    int marks;
public :
    string name;
    // setter function for private variable id
    void set_id(int num) {
        id = num;
    }
    // getter function for private variable id
    int get_id() {
        return id;
    }
    // setter function for protected variable marks
    void set_marks(int num) {
        marks = num;
    }
    // getter function for protected variable marks
    int get_marks() {
        return marks;
    }
};
// inherit Student class from Person
// using public inheritance
class Student : public Person {
};
int main() {
    // create Student object
    Student student ;
    // initialize public variable name 
    student.name = "Tom Araya" ;
    // call setter function for id
    // pass 101 as argument
    student.set_id(101);
    // call setter function for marks
    // pass 97 as argument
    student.set_marks(97);
    // print student name
    cout << student.name << endl ;
    // call getter functions for private and protected variables
    cout << student.get_id() << endl ;
    cout << student.get_marks() << endl ;
    return 0;
}
