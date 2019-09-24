#include <iostream>
#include <vector>
#include <algorithm>
#include <string>

constexpr double pi = 3.1415;

struct Pizza
{
    double radius, price;
    std::string restaurant;
    std::string size;
    decltype(radius) area;
    decltype(radius) areaPerPrice;
};

int main()
{

    std::vector<Pizza> pizzas = {
        {0.5 * 0.25, 47.49, "Dominos", "s"},
        {0.5 * 0.28, 88.99, "Dominos", "m"},
        {0.5 * 0.32, 110.99, "Dominos", "l"},
        {0.5 * 0.20, 4.00, "BistroAnanas", "s"},
        {0.5 * 0.25, 5.90, "BistroAnanas", "m"},
        {0.5 * 0.30, 7.50, "BistroAnanas", "l"},
        {0.5 * 0.26, 6.30, "PizzeriaKing", "m"},
        {0.5 * 0.30, 7.80, "PizzeriaKing", "l"},
        {0.5 * 0.26, 5.50, "PizzeriaNapoli", "s"},
        {0.5 * 0.32, 7.50, "PizzeriaNapoli", "l"},
        {0.5 * 0.32, 7.40, "GoldenerHecht", "m"},
        {0.5 * 0.48, 15.50, "GoldenerHecht", "l"},
        {0.5 * 0.26, 5.00, "SanRemo", "s"},
        {0.5 * 0.32, 6.50, "SanRemo", "m"},
        {0.5 * 0.20, 3.80, "Mardino", "s"},
        {0.5 * 0.26, 5.70, "Mardino", "m"},
        {0.5 * 0.30, 7.30, "Mardino", "l"}};

    for (auto &p : pizzas)
    {
        p.area = p.radius * p.radius * pi;
        p.areaPerPrice = p.area / p.price;
    }

    // sort by price
    std::sort(pizzas.begin(), pizzas.end(), [](Pizza a, Pizza b){return a.areaPerPrice > b.areaPerPrice;});

    for (int i = 0; i < 3; ++i)
    {
        const auto &p = pizzas[i];
        std::cout << p.restaurant << " " << p.size << std::endl;
    }

    std::string findRestaurant = "SanRemo";

    std::cout << "Type a restaurant name to search for: ";
    std::cin >> findRestaurant;

    auto it = std::find_if(pizzas.begin(), pizzas.end(), [&findRestaurant](Pizza p) { return p.restaurant == findRestaurant; });

    if (it == pizzas.end()) {
        std::cout << "Restaurant " << findRestaurant << " is not in the ranking " << std::endl;
        return 0;
    }

    std::cout << "The cheapest pizza of " << findRestaurant << " has position " 
            << std::distance(pizzas.begin(), it) << " in the ranking" << std::endl;

    std::cout << "\tName: " << it->size << std::endl;
    std::cout << "\tPrice: " << it->price << std::endl;
    std::cout << "\tRadius: " << it->radius << std::endl;
    return 0;
}
