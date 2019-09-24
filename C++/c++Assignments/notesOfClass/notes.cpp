#include <iostream>


int main (){
    int a = 10;
    std::cout << &a << std::endl;
    std::cout << a << std::endl;
    int &b = a;
    std::cout << &b << std::endl;
    std::cout << b << std::endl;

    b =93493;

    std::cout << a << std::endl;

    return 0;
}