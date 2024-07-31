#include <iostream>
#include "Matrix.h"



int main(int argc, char const *argv[])
{   
    std::cout<<"MAtrici mono\n ";
    Matrix mat{3,3};
    mat.randomMatrix();
    mat.printMatrix();


    Matrix mat3{mat};
    mat.printMatrix();
    
    mat=mat3*mat;
    mat.printMatrix();
/*
    Matrix mat2{mat+mat3};
    
    mat2.printMatrix();

    Matrix m5{mat+mat2+mat3};
    m5.printMatrix();
*/

    //std::cout<<"ciao";
    /*
    Matrix mat2(2,3);
    mat2.printMatrix();
    mat2=mat;
    mat2.printMatrix();

    Matrix mat3(3,3);    
    mat3=mat+mat2;
    mat3.printMatrix();

    Matrix mat4(3,3);
    mat4=mat*mat2;

    mat4.printMatrix();
    */
    return 0;
}
