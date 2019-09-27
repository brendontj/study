#include <iostream>
#include <vector>
#include <cstdlib>
#include <chrono> 


#define N_SIZE 300000000

using std::vector;
using std::cout;
using std::endl;

int main () {

    vector<int> vectorA (N_SIZE);
    vector<int> vectorB (N_SIZE);

    for(int i = 0 ; i < N_SIZE; i++ ) {
        vectorA [i]= rand();
        vectorB [i]= rand();
    }

    vector<int> vectorC (N_SIZE);

    auto t1 = std::chrono::high_resolution_clock::now();
    for (int i = 0; i < N_SIZE; i++) {

        vectorC[i] = vectorA[i] + vectorB[i];
    }
    auto t2 = std::chrono::high_resolution_clock::now();

    auto duration = std::chrono::duration_cast<std::chrono::milliseconds>( t2 -t1 ).count();

    cout << "Durantion of single thread sum : " << duration << endl;

    auto t3 = std::chrono::high_resolution_clock::now();
    #pragma omp parallel for num_threads(4)
    for (int i = 0; i < N_SIZE; i+=4) {
        vectorC[i] = vectorA[i] + vectorB[i];
        vectorC[i+1] = vectorA[i+1] + vectorB[i+1];
        vectorC[i+2] = vectorA[i+2] + vectorB[i+2];
        vectorC[i+3] = vectorA[i+2] + vectorB[i+3];
    }

    auto t4 = std::chrono::high_resolution_clock::now();

    auto durationP = std::chrono::duration_cast<std::chrono::milliseconds>( t4 -t3 ).count();

    cout << "Durantion of multi thread sum : " << durationP << endl;


    return 0;
}


