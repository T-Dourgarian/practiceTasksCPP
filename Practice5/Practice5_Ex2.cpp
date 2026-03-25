// Replace ___ with your code
#include <iostream>
using namespace std ;

class Polygon {
public :
    // variable to store total no. of polygon sides
    int total_sides ;
    void display_info () {
        cout << "A polygon is a two dimensional shape with straight lines." << endl ;
    }
    int get_perimeter ( int sides []) {
        int perimeter = 0;
        // find sum of all sides
        for ( int i = 0; i < total_sides ; ++ i ) {
            perimeter = perimeter + sides[ i ];
        }
        return perimeter;
    }
};

// inherit the Quadrilateral class
class Quadrilateral : public Polygon {
public :
    // constructor to initialize total_sides
    Quadrilateral() {
        total_sides = 4;
    }
    // create function
    void display_info() {
        cout << "A quadrilateral is a polygon with 4 sides." << endl ;
    }
};

int main() {
    // create an object of Quadrilateral q1
    Quadrilateral q1;
    // sides of quadrilateral
    int sides[4];
    // get input for sides
    for ( int i = 0; i < 4; ++i) {
        cin >> sides[ i ];
    }
    // call get_perimeter using q1
    int perimeter = q1.get_perimeter(sides);
    cout << perimeter << endl ;
    // call display_info () function
    q1.display_info();
    return 0;
}
