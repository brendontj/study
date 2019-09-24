#include <iostream>

using std::cout;
using std::cin;
using std::endl;

int main() {

    std::string firstName;
    std::string lastName;

    cout << "Please enter your first name: " << endl;
    cin >> firstName;

    cout << "Please enter your last name: " << endl;
    cin >> lastName;

    std::string name (firstName + " " + lastName);

    cout << "Hello " << name << "!" << endl;

    cout << "Your name contais " << name.length() << " characters." << endl;


    return 0;


}