#include <iostream>

#define PI 3.14159;

struct Pizza {
    int size;
    float area;
    float price;
    float areaPerPrice;
};

int main () 
{
    Pizza s, m, b;

    s.size = 2;
    s.area = s.size * s.size * PI ;
    s.price = 30.00;
    s.areaPerPrice = s.area / s.price;

    m.size = 4;
    m.area = m.size * m.size * PI ;
    m.price = 45.00;
    m.areaPerPrice = m.area / m.price;

    b.size = 5;
    b.area = b.size * b.size * PI ;
    b.price = 75.00;
    b.areaPerPrice = b.area / b.price;

    if (s.areaPerPrice > m.areaPerPrice) {
        if (s.areaPerPrice > b.areaPerPrice) {
            std::cout << "Price Small: " << s.price << std::endl;
        }
        else {
            std::cout << "Price Big: " << b.price << std::endl;
        }
    }
    else {
        if (m.areaPerPrice > b.areaPerPrice) {
            std::cout << "Price Medium: " << m.price << std::endl;
        }
        else {
            std::cout << "Price Big: " << b.price << std::endl;
        }
    }
    
    return 0;
}