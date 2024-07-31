#include "Matrix.h"



Matrix::Matrix(int r, int c): row{r},column{c}{

    matrix=new double[row*column];

    
    for(int i{0};i<row;i++)
        for(int j{0};j<column;j++)
            matrix[i*row+j]=0;
}

Matrix::Matrix(const Matrix& copy): row{copy.row},column{copy.column}{

    matrix=new double[row*column];

    
    for(int i{0};i<row;i++)
        for(int j{0};j<column;j++)
            matrix[i*row+j]=copy.matrix[i*row+j];
}


Matrix::~Matrix(){

    delete[] matrix;
    
}

Matrix& Matrix::operator=(const Matrix& copy){
    
    if(this==&copy) return*this;

    else{
       // std::cout<<" bug2";
        delete[] matrix;
        row=copy.row;
        //std::cout<<" \nbug";
        column=copy.column;
    
        matrix=new double[row*column];
        for(int i{0};i<row;i++)
            for(int j{0};j<column;j++)
                matrix[i*row+j]=copy.matrix[i*row+j];
                
        
    }
    return *this;
}

Matrix operator+(const Matrix& mat1,const Matrix& mat2){
    if(mat1.row==mat2.row&& mat1.column==mat2.column){
        Matrix sum{mat1};

        for(int i{0};i<sum.row;i++)
            for(int j{0};j<sum.column;j++)
                sum.matrix[i*sum.row+j]+=mat2.matrix[i*sum.row+j];

        
        return sum;     

    }else
        throw std::invalid_argument{"\n Operazione tra due matrici non compatibili "};


}

Matrix operator-(const Matrix& mat1,const Matrix& mat2){
    if(mat1.row==mat2.row&& mat1.column==mat2.column){
        Matrix sum{mat1};

        for(int i{0};i<sum.row;i++)
            for(int j{0};j<sum.column;j++)
                sum.matrix[i*sum.row+j]-=mat2.matrix[i*sum.row+j]; 

        return sum;    

    }else
        throw std::invalid_argument{"\n Operazione tra due matrici non compatibili "};


}

Matrix operator*(const Matrix& mat1,const Matrix& mat2){
    //std::cout<<" bug";
    if(mat1.column==mat2.row){
        Matrix product{mat1.row,mat2.column};
        product.printMatrix();

        for(int i{0};i<product.row;i++){

            for(int j{0};j<product.column;j++){
                for (int k = 0; k <mat1.column ; k++)
                {   
                    product.matrix[(i*product.row)+j]+= mat1.matrix[i*mat1.row+k]*mat2.matrix[k*mat2.row+j];
                }
                
            }

        }
        return product;

    }else
        throw std::invalid_argument{"\n Operazione tra due matrici non compatibili "};

}


void Matrix::printMatrix()const{
    std:: cout<< "\n STAMPA MATRICE \n";
    for (size_t i = 0; i < row; i++)
    {
        for (size_t j = 0; j < column; j++)
        {
            std::cout<< " "<< matrix[i*row+j];
        }
        std::cout<<std::endl;
        
    }
    std::cout<<"\n";
    


}


void Matrix::randomMatrix(){

    srand(static_cast<unsigned int>(time(0)));

    for(int i{0};i<row;i++)
        for(int j{0};j<column;j++)
            matrix[i*row+j]=rand()%10;

}