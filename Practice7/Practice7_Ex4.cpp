// Replace ___ with your code
#include <iostream>
using namespace std ;
// base class
class Account {
protected :
    string account_id, password;
public :
    // function to print the protected members
    void display_info () {
        cout << account_id << endl ;
        cout << password << endl ;
    }
};
// derive Gmail class from account
class Gmail : public Account {
public :
    string domain = "@gmail.com" ;
    // create constructor with string parameters username and pw
    Gmail(string username, string pw) {
        // concatenate username and domain
        // assign the result to account_id
        account_id = username + domain;
        // assign pw to password
        password = pw;
    }
};
int main() {
    // create gmail1 object from Gmail
    // assign „ TalTech " and „ IT College " as parameters
    Gmail gmail1("TalTech", "IT College");
    // call the display_info () function
    gmail1.display_info();
    return 0;
}
