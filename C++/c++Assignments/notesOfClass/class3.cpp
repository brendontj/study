#include <iostream>
#include <vector>
#include <algorithm>

int main () {

    std::vector<int> v { 1,10, 20,50 ,100};

    auto lambdaFunction = [](int i, int j ) { 
            return i + j;
            };

    std::cout << lambdaFunction(10,30) << std::endl;


    int teste =1000;

    std::for_each(v.begin(), v.end() , [teste] (decltype(v[0]) e){ e+= teste;});
    

    for (auto& p : v){
        std::cout << p << ' ' << std::endl;
    }
}