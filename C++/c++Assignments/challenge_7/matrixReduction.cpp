#include <iostream>
#include <algorithm>
#include <vector>
#include <cstdlib>
#include <functional>

#define RANDOMMAX 50

using std::vector;


int add (int a, int b) { 
    return a + b ;
}


void matReduce (vector<vector<int>> m, int &red, std::function<int(int,int)> pf) {

}

int main () {

    int rSizeRR = (std::rand() % RANDOMMAX) + 1;
    int rSizeCC = (std::rand() % RANDOMMAX) + 1;

    vector < vector <int>> matrix ;

    for (int i = 0; i < rSizeRR; ++i) {
        vector<int> auxVector;

        for (int j = 0; j < rSizeCC; ++j) {

            auxVector.push_back((std::rand() % RANDOMMAX) + 1);
        }
        matrix.push_back(auxVector);
    }

    for (int i = 0; i < rSizeRR; i++) {
        for (int j = 0; j < rSizeCC ;j ++) {
            std::cout << matrix[i][j] << ' ' ;
        }
        std::cout << std::endl;
    }

     


return 0;

}
