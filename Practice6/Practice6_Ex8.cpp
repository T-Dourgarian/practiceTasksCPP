// Replace ___ with your code
#include <iostream>
using namespace std ;

class Polygon {
public :
    // pure virtual function to calculate area
    virtual double calculate_area () = 0;
};

// derive Triangle class from Polygon
class Triangle : public Polygon {
public :
    double base, height;
    // constructor to initialize base and height
    Triangle (double base, double height) : base(base), height(height) {}
    // function to override pure virtual function
    double calculate_area () {
        return 0.5 * base * height;
    }
};

// Derive Rectangle class from Polygon
class Rectangle : public Polygon {
public :
    double length, breadth;
    // constructor to initialize length and breadth
    Rectangle( double l , double b) {
        length = l;
        breadth = b;
    }
    // function to override pure virtual function
    double calculate_area () {
        return length * breadth;
    }
};

int main() {
    // get input for dimensions of triangle and rectangle
    double base, height, length, breadth;
    cin >> base >> height >> length >> breadth;
    // create Triangle object
    // pass base and height to constructor
    Triangle triangle(base, height);
    // create Rectangle object
    // pass length and breadth to constructor
    Rectangle rectangle(length, breadth);
    // call calculate_area () of triangle object
    double area_triangle = triangle.calculate_area () ;
    // call calculate_area () of rectangle object
    double area_rectangle = rectangle.calculate_area () ;
    // print the areas
    cout << area_triangle << endl << area_rectangle ;
    return 0;
}