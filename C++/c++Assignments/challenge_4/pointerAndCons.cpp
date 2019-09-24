#include <iostream>


int main () {

  // Constant PI
  constexpr float pi = 3.14159;


  constexpr int sizeSmall = 2,
        sizeMedium = 4,
        sizeBig = 5;

  constexpr float priceSmall = 30.00,
          priceMedium = 45.00,
          priceBig = 75.00;

  constexpr float   areaS = sizeSmall * sizeSmall * pi,
          areaM = sizeMedium * sizeMedium * pi,
          areaB = sizeBig * sizeBig * pi;


  constexpr float areaPerPriceS = areaS / priceSmall,
          areaPerPriceM = areaM / priceMedium,
          areaPerPriceB = areaB / priceBig;

    if (areaPerPriceS > areaPerPriceM) {
        if (areaPerPriceS > areaPerPriceB) {
            std::cout << "Price Small: " << priceSmall << std::endl;
        }
        else {
            std::cout << "Price Big: " << priceBig << std::endl;
        }
    }
    else {
        if (areaPerPriceM > areaPerPriceB) {
            std::cout << "Price Medium: " << priceMedium << std::endl;
        }
        else {
            std::cout << "Price Big: " << priceBig << std::endl;
        }
    }

    return 0;

}