#include <iostream>
#include <vector>

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

        // void Matrix::setVal(double value, int r, int c) {
        //     this->vals[r][c] = value;
        // }

        // double Matrix::getVal(int r, int c) {
        //     return this->vals[r][c];
        // }


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
    double t = m(0,0);
    cout << t << std::endl;
    m.printM();
}



