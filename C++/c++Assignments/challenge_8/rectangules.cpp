#include <iostream>
#include <algorithm>
#include <vector>

using std::cout;
using std::vector;
using std::string;

struct rectangle {
    vector<int> topRight;
    vector<int> bottomLeft;
};


void printSystem(vector<string> cS) {
    for(auto& l: cS){
        cout << l << std::endl;
    }
}

void startSystem(vector<string> &cS) {

    cS[0].assign(26,' ');
    cS[0][12] = ('1');
    cS[0][13] = ('0');
    cS[1].assign(23,' ');
    cS[1][12] = ('^');

    cS[10].assign("-10---------0--------->10");

    for (int i = 2,j= 11; i< 10 && j < 21; ++i,++j) {
        cS[i].assign(26,' ');
        cS[i][12] = ('|');
        cS[j].assign(26,' ');
        cS[j][12] = ('|');
    }

} 


int main(){

    vector<string> coordSystem(26);

    startSystem(coordSystem);
    printSystem(coordSystem);

    return 0;
}


