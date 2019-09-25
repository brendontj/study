#include <iostream>
#include <vector>
#include <cstdlib>
#include <algorithm>


#define RANDOMMAX 100

using std::vector;


int main () {


    // init a vector of a random size
    int randomSize = std::rand() % RANDOMMAX ;
    vector <int> generateVector (randomSize);


    // generation of rand values to vector
    //for( auto& p : generateVector) {
        //p = std::rand();
        //std::cout << p << std::endl;
    //}

    // Example for_each
    std::for_each(generateVector.begin(), generateVector.end(), [] (decltype(generateVector[0]) e){ e = std::rand() % 20;});

    
    // Example count_if
    int count =  std::count_if(generateVector.begin(), generateVector.end(),[] (int n) { return n > 10;});

    //std::cout << count << std::endl;


    // Example remove_if
    generateVector.erase(
        std::remove_if(generateVector.begin(), generateVector.end(), [] (int t) { return t > 10;}),
        generateVector.end());


    // Example sort
    std::sort(generateVector.begin(), generateVector.end(), [] (int a, int b) { return a < b;});


    // Example of reverse sort
    std::sort(generateVector.begin(), generateVector.end(), [] (int a, int b) { return b < a;});

    for( auto& p : generateVector) {
        std::cout << p << std::endl;
    }

    return 0;
}