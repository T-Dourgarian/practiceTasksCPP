// Replace ___ with your code
#include <iostream>
#include <string>
using namespace std;

class Person {
public:
    string name;
    Person(string argument) {
        name = argument;
    }
};

int main() {
    Person person("Michael Douglas");
    cout << person.name << endl;
    return 0;
}
