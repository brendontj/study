#include <iostream>
#include <vector>
#include <cstdlib>
#include <algorithm>
#include <random>



#define RANDOMMAX 100

using std::vector;


void printVet (const vector<int> vet) {
    for(auto& i: vet){
        std::cout << i << " ";
    }
}

int main () {

    // init a vector of a random size
    int randomSize = std::rand() % RANDOMMAX ;
    vector <int> generateVector (randomSize);

    // Example for_each
    std::for_each(generateVector.begin(), generateVector.end(), [] (decltype(generateVector[0]) e){ e = std::rand() % 20;});

    // Example count_if
    int count =  std::count_if(generateVector.begin(), generateVector.end(),[] (int n) { return n > 10;});

    // Example remove_if
    generateVector.erase(
        std::remove_if(generateVector.begin(), generateVector.end(), [] (int t) { return t > 10;}),
        generateVector.end());

    // Example sort
    std::sort(generateVector.begin(), generateVector.end(), [] (int a, int b) { return a < b;});

    // Example of reverse sort
    std::sort(generateVector.begin(), generateVector.end(), [] (int a, int b) { return a > b;});

    // Example of shuffle

    std::mt19937 g(std::rand());
    std::shuffle(generateVector.begin(), generateVector.end(), g);

    return 0;
}