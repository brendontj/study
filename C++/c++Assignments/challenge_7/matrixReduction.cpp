#include <iostream>
#include <algorithm>
#include <vector>
#include <cstdlib>
#include <functional>

#define RANDOMMAX 50

using std::vector;


int add (const int a,const int b) { 
    return a + b ;
}
void matReduce (const vector <vector<int>> m, int &red,const std::function<int(int,int)> pf) {

    for(auto& r: m){
        for(auto& c: r){
            red = pf(red, c);
        }
    }
}

void printMatrix (const vector <vector<int>> m) {
    for(auto& r: m){
        for(auto& c: r) {
            std::cout << c << " " << std::endl;
        }
        std::cout << std::endl;
    }
}

int main () {

    int rSizeRR = (std::rand() % RANDOMMAX) + 1;
    int rSizeCC = (std::rand() % RANDOMMAX) + 1;

    vector<vector<int>> matrix ;

    for (int i = 0; i < rSizeRR; ++i) {
        vector<int> auxVector;
        for (int j = 0; j < rSizeCC; ++j) {
            auxVector.push_back((std::rand() % RANDOMMAX) + 1);
        }
        matrix.push_back(auxVector);
    }

    int sum = 0;
    matReduce(matrix,sum, add);
    std::cout << sum <<std::endl;
    // printMatrix(matrix);
    
return 0;
}
