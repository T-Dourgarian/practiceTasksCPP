// Replace ___ with your code
#include <iostream>
using namespace std;

class Triangle {
public:
    int base;
    int height;
    Triangle(int b, int h) {
        base = b;
        height = h;
    }

    double calculate_area() {
        double area = (base * height) / 2.0;
        return area;
    }
};

int main() {
    int base, height;
    cin >> base;
    cin >> height;
    Triangle triangle(base, height);
    double area = triangle.calculate_area();
    cout << area << endl;
    return 0;
}
