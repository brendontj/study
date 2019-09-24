#include <iostream>
#include <string>

int main () {

    std::string str = std::string("Test string AEHOHOHOHOHOH");

    std::string otherStr(200,"k");



    std::cout << str << std::endl;
    std::cout << str + otherStr << std::endl;
    return 0 ;

}