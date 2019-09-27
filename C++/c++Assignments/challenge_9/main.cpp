#include <iostream>
#include <vector>
#include <iomanip>
#include "matrix.h"

#define n_size 10
#define m_size 20

using std::vector;
using std::cout;


class Matrix {

    private:
        int rowSize;
        int colSize;
        vector<vector<double>> vals;
        

    public:
        Matrix(int n , int m);
        double getVal(int r, int c);
        void setVal(double value, int r , int c);
        void printM();
};
    Matrix::Matrix(int n, int m) {

            this->rowSize = n;
            this->colSize = m;

            for (int i = 0; i < n ; ++i) {
                vector <double> auxV ;
                for (int j = 0; j < m; j++) {
                    auxV.push_back(0);
                }
                this->vals.push_back(auxV);
                
            }             
        }

        void Matrix::setVal(double value, int r, int c) {
            this->vals[r][c] = value;
        }

        double Matrix::getVal(int r, int c) {
            return this->vals[r][c];
        }


    void Matrix::printM (){
        cout << "Row size = " << this-> rowSize << std::endl;
            cout << "Col size = " << this-> colSize << std::endl;
            
            for(auto& r: this->vals){
                for(auto& c: r) {
                    cout << std::setw(4);
                    cout << std::setprecision(3) << c << ' ';
                }
                cout << std::endl;
            }
        }

int main() {
    Matrix m(n_size,m_size);

    m.setVal(30.0,0,0);
    cout << m.getVal(0,0) << std::endl;
    m.printM();
}



