#include <iostream>

int Fibonacci (int seqNumber) {

    int pred = 0;
    int current = 1;
    int tmp;
    std::cout << pred << " " << current;

    for (int i = 2; i < seqNumber - 1 ; i++) {
        tmp = current;
        current = current + pred;
        std::cout << " " << current;
        pred = tmp;
    }

    current = current + pred;
    std::cout << " " << current << std::endl;

    return 0;
};


int main (int argc , char *argv[]) 
{

    int fibonacciSeq = 10;
    
    if (argc > 1) fibonacciSeq = atoi(argv[1]); 

    Fibonacci(fibonacciSeq);

}