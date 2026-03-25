// Replace ___ with your code
#include <iostream>
using namespace std ;

class Triangle {
public :
    int base;
    int height;
    // calculate area
    double calculate_area () {
        double area = (base * height) / 2.0;
        return area;
    }
};

int main() {
    // create object of Triangle
    Triangle triangle1;
    // create Triangle pointer pt
    // point to triangle1 object
    Triangle *pt = &triangle1;
    // get input values for base and height of triangle using pt
    cin >> pt->base >> pt->height;
    // call the function to compute area using pt and print it
    double area = pt->calculate_area();
    cout << area << endl ;
    return 0;
}
