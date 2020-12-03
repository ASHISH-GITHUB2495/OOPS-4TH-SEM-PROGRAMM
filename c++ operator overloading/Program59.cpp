#include<iostream>
#include <cassert> // for assert()
class Matrix
{
private:
    double data[4][4]={{1,2,3,4},{5,6,7,8},{9,10,11,12},{13,14,15,16}};;

public:
    double& operator()(int row, int col);
    double operator()(int row, int col) const;
    void operator()();
};

double& Matrix::operator()(int row, int col)
{   std::cout<<"within return ref"<<std::endl;
    assert(col >= 0 && col < 4);
    assert(row >= 0 && row < 4);

    return data[row][col];
}

double Matrix::operator()(int row, int col) const
{   std::cout<<"within const"<<std::endl;
    assert(col >= 0 && col < 4);
    assert(row >= 0 && row < 4);

    return data[row][col];
}

void Matrix::operator()()
{
    // reset all elements of the matrix to 0.0
    for (int row= 0 ; row < 4; ++row)
    {
        for (int col= 0 ; col < 4; ++col)
        {
            data[row][col] = 0.0;
        }
    }
}
int main()
{
    Matrix matrix;
    matrix(1, 2)= 4.5;
    std::cout<<matrix(1,2)<<'\n';
    std::cout<<matrix(2,2)<<'\n';
    matrix(); // erase matrix
    std::cout << matrix(1, 2) << '\n';
    const Matrix matrix2;
    //matrix2(1,2)=4.5;
    std::cout<<matrix2(1,2);
    return 0;
}
