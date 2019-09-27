#include <iostream>
#include <vector>
#include <iomanip>
#include <assert.h>
#include "matrix.h"

using std::cout;
using std::vector;

Matrix::Matrix(int n, int m)
{

    this->rowSize = n;
    this->colSize = m;

    for (int i = 0; i < n; ++i)
    {
        vector<double> auxV;
        for (int j = 0; j < m; j++)
        {
            auxV.push_back(0);
        }
        this->vals.push_back(auxV);
    }
}

Matrix::Matrix(const Matrix& a) {
    this->rowSize = a.rowSize;
    this->colSize = a.colSize;

    for (int i = 0; i < this->rowSize; ++i) {

        vector<double> aux (this->colSize);
        for (int j = 0; j <this->colSize; ++j) {
            aux[j] = a.vals[i][j];
        }
        this->vals.push_back(aux);
    }
} 

void Matrix::setVal(double value, int r, int c)
{
    this->vals[r][c] = value;
}

double Matrix::getVal(int r, int c)
{
    return this->vals[r][c];
}

int Matrix::getRowSize() {
    return this->rowSize;
}

int Matrix::getColSize() {
    return this->colSize;
}

Matrix Matrix::addM( Matrix a) {
    assert(this->rowSize == a.getRowSize());
    assert(this->colSize == a.getColSize());

    Matrix b(this->rowSize , this->colSize);

    for (int i = 0; i < this->rowSize; ++i){
        for (int j = 0; j < this->colSize; ++j) {
            b.vals[i][j] = this->vals[i][j] + a.vals[i][j];
        }
    }

    return b;

}

Matrix& Matrix::operator=(const Matrix &other) {

    this->rowSize = other.rowSize);
    this->colSize = other.colSize);

    for (int i = 0; i < this->rowSize; ++i){
        for (int j = 0; j < this->colSize; ++j) {
            this->
        }
    }
    

}

void Matrix::printM()
{
    cout << "Row size = " << this->rowSize << std::endl;
    cout << "Col size = " << this->colSize << std::endl;

    for (auto &r : this->vals)
    {
        for (auto &c : r)
        {
            cout << std::setw(4);
            cout << std::setprecision(3) << c << ' ';
        }
        cout << std::endl;
    }
}

