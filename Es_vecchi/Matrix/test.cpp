#include <iostream>
#include "Matrix.h"
#include <exception>





int main(int argc, char const *argv[])
{
    Matrix mat{3,3};
    
    mat.randomMatrix();
    mat.printMatrix();

    Matrix mat2{mat};



   
  try{
    mat=mat2+mat;
    mat.printMatrix();
  }
  catch(std::invalid_argument& e){

      std::cout<<"\n si strunz"<<e.what();
       mat.printMatrix();
  }

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



