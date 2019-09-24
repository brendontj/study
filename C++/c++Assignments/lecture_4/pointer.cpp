#include <iostream>

constexpr double pi = 3.14159;

struct Pizza
{
    const double radius, price; 
    const decltype(radius) area = radius * radius * pi;
    const decltype(radius) areaPerPrice = area / price;
};

int main()
{

    constexpr Pizza s{0.5 * 0.25, 7.49};
    constexpr decltype (s) m{0.5 * 0.28, 8.99};
    constexpr decltype (s) l{0.5 * 0.32, 10.99};



    std::cout << "the best area to price ratio has pizza size ";

    double *bestPrice;
    if(s.areaPerPrice < m.areaPerPrice && s.areaPerPrice < l.areaPerPrice){
            bestPrice = &s.price;
    }
    else if(m.areaPerPrice < s.areaPerPrice && m.areaPerPrice < l.areaPerPrice){
            bestPrice = &m.price;
    }   
    else if(l.areaPerPrice < s.areaPerPrice && l.areaPerPrice < m.areaPerPrice){
            bestPrice = &l.price;
    }


    std::cout << "s\nPrice: " << bestPrice << std::endl;
        std::cout << "\n";
        for(int i = 1; i < 11; ++i){
            std::cout << i << " pizza";
            if(i != 1)
                std::cout << "s";
            std::cout << " = " << i * (*bestPrice) << std::endl;
        }

}