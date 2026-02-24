// Replace ___ with your code
#include <iostream>
#include <string>
using namespace std;

class Person {
public:
    string name = "Marty McFly";

    
    Person() {
        cout << "Welcome " << name;
    }
};

int main() {
    Person person;
    return 0;
}
