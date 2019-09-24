#include <iostream>
#include <string>

// using namespace std;

using std::cout; 
using std::endl;

int main () {

    const std::string str("Test string AEHOHOHOHOHOH");
    const std::string otherStr ("testandoTestando");



    cout << str << endl;
    cout << str + otherStr << endl;
    cout << (str+otherStr).length() << endl;


    return 0 ;

}