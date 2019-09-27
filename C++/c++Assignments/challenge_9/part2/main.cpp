#include <iostream>
#include <vector>
#include "matrix.h"

#define n_size 10
#define m_size 20

using std::cout;

int main()
{
    Matrix m(n_size, m_size);
    Matrix d(n_size, m_size);

    m.setVal(30.0, 0, 0);
    d.setVal(45.3, 0, 1);
    d.setVal(2, 0, 0);

    Matrix t = m.addM(d);
    // cout << m.getVal(0, 0) << std::endl;

    Matrix k(t);
    k.printM();
}
