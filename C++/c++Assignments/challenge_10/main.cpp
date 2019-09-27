#include <iostream>
#include <vector>
#include <assert.h>

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
        void printM();

        double operator()(int i, int j) const {
            return vals[i][j];
        }

        double& operator()(int i, int j) {
            
            return vals[i][j];
        }

        int getRowSize (){
            return this->rowSize;
        }
        int getColSize() {
            return this->colSize;
        }

        Matrix& operator+(const Matrix& a) {
            
                     
                assert( this->rowSize == a.rowSize);
                assert( this->colSize == a.colSize);
                
                for(int i = 0; this->rowSize; ++i){
                    for(int j = 0; this->colSize; ++j ){
                        this->vals[i][j] += a.vals[i][j] ;
                    }
                }
            return *this;
        }

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


    void Matrix::printM (){
        cout << "Row size = " << this-> rowSize << std::endl;
            cout << "Col size = " << this-> colSize << std::endl;
            
            for(auto& r: this->vals){
                for(auto& c: r) {
                    cout << c << ' ';
                }
                cout << std::endl;
            }
        }

int main() {
    Matrix m(n_size,m_size);
    m(0,0) = 10;
    // double t = m(0,0);
    // cout << t << std::endl;
    // m.printM();

     Matrix d(n_size,m_size);
     d(0,0) = 20.3;
     m = m + d;
     m.printM();
}



