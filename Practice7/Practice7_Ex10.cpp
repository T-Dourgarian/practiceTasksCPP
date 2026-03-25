// Replace ___ with your code
#include <iostream>
using namespace std ;
// create Student class
class Student {
public :
    double marks;
    // constructor to initialize marks
    Student( double m) : marks( m) {}
};
// function that takes two Student objects as parameters
double calculate_average(Student s1, Student s2) {
    // calculate the average of marks of the objects
    double average = (s1.marks + s2.marks) / 2;
    return average;
}
int main() {
    // create double variables
    double marks1, marks2;
    // get user input for marks1 and marks2
    cin >> marks1 >> marks2;
    // create two Student objects
    // pass marks1 and marks2 to the object constructors, respectively
    Student student1(marks1);
    Student student2(marks2);
    // call the function and pass the objects as arguments
    double average = calculate_average(student1, student2);
    // print average
    cout << average << endl ;
    return 0;
}
