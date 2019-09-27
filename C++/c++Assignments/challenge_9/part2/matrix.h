
#ifndef MATRIX_H

#include <iostream>
#include <vector>

#define MATRIX_H

class Matrix
{

private:
    int rowSize;
    int colSize;
    std::vector<std::vector<double>> vals;

public:
    Matrix(int n, int m);
    double getVal(int r, int c);
    void setVal(double value, int r, int c);
    int getRowSize();
    int getColSize();
    Matrix addM(Matrix a);
    void printM();
};

#endif