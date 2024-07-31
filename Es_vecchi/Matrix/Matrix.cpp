#include "Matrix.h"


Matrix::Matrix() :row{1},column{1}{

    matrix=new double*[row];
    for(int i{0};i<row;i++) 
        matrix[i]=new double[column];
    
    matrix[0][0]=0;

}

Matrix::Matrix(int r, int c): row{r},column{c}{

    matrix=new double*[row];

    for(int i{0};i<row;i++) 
        matrix[i]=new double[column];
    
    for(int i{0};i<row;i++)
        for(int j{0};j<column;j++)
            matrix[i][j]=0;
}

Matrix::Matrix(const Matrix& copy): row{copy.row},column{copy.column}{

    matrix=new double*[row];
    for(int i{0};i<row;i++) 
        matrix[i]=new double[column];
    
    for(int i{0};i<row;i++)
        for(int j{0};j<column;j++)
            matrix[i][j]=copy.matrix[i][j];
}


Matrix::~Matrix(){

    for (size_t i = 0; i < row; i++)
    {
        delete[] matrix[i];
    }
    delete[] matrix;
    
}

Matrix& Matrix::operator=(const Matrix& copy){
    
    if(this==&copy){
        
        
        return*this;
    }else{
       // std::cout<<" bug2";
        for(int i{0};i<row;i++)  
            delete[] matrix[i];
        
        delete[] matrix;

        row=copy.row;
        //std::cout<<" \nbug";
        column=copy.column;
    
        matrix=new double*[row];


        for(int i{0};i<row;i++) 
            matrix[i]=new double[column];
        
        for(int i{0};i<row;i++)
            for(int j{0};j<column;j++)
                matrix[i][j]=copy.matrix[i][j];
                
        
    }
    return *this;
}

Matrix operator+(const Matrix& mat1,const Matrix& mat2){

    if(!(mat1.row==mat2.row&& mat1.column==mat2.column))
        throw std::invalid_argument{"\n Operazione tra  due matrici non compatibili "};
    Matrix sum{mat1};

    for(int i{0};i<sum.row;i++)
        for(int j{0};j<sum.column;j++)
            sum.matrix[i][j]+=mat2.matrix[i][j];

        
    return sum;     



}

Matrix operator-(const Matrix& mat1,const Matrix& mat2){

    if(!(mat1.row==mat2.row&& mat1.column==mat2.column))
            throw std::invalid_argument{"\n Operazione tra due matrici non compatibili "};

    Matrix sum{mat1};

    for(int i{0};i<sum.row;i++)
        for(int j{0};j<sum.column;j++)
            sum.matrix[i][j]-=mat2.matrix[i][j]; 

    return sum;    





}

Matrix operator*(const Matrix& mat1,const Matrix& mat2){
    if(mat1.column==mat2.row){
        Matrix product{mat1.row,mat2.column};

        for(int i{0};i<product.row;i++){

            for(int j{0};j<product.column;j++){
                for (int k = 0; k <mat1.column ; k++)
                {
                    product.matrix[i][j]+= mat1.matrix[i][k]*mat2.matrix[k][j];
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
            std::cout<< " "<< matrix[i][j];
        }
        std::cout<<std::endl;
        
    }
    std::cout<<"\n";
    


}


void Matrix::randomMatrix(){


    srand(static_cast<unsigned int>(time(0)));

    for(int i{0};i<row;i++)
        for(int j{0};j<column;j++)
            matrix[i][j]=rand()%10;

}



bool Matrix::operator==(const Matrix& copy){

if(!(row==copy.row&& column==copy.column)) 
    return false;
else{

    bool outcome{true};


    for(size_t i{0};i<row&&outcome==true;i++)
        for (size_t j = 0; j < column&&outcome==true; j++)
            if(matrix[i][j]!=copy(i,j))
                return false;

}
    return true ;

}


std::ostream& operator<<(std::ostream& output , const Matrix& mat){

    
    return output;
}



