#ifndef MATRIX_H
#define MATRIX_H
#include <iostream>
#include <exception>
#include <cstdlib>
#include <ctime>

class Matrix
{
private:
    double* matrix;
    int row, column;
    
public:
    friend Matrix operator+(const Matrix&, const Matrix&);
    friend Matrix operator-(const Matrix&,const Matrix&);
    friend Matrix operator*(const Matrix&,const Matrix&);
    
    

    Matrix(int=3, int=3);
    Matrix(const Matrix&);

    Matrix& operator=(const Matrix&);
    void printMatrix()const;
    void randomMatrix();
    double operator()(int r, int c)const{return matrix[r*column + c]; }


    ~Matrix();

};








#endif