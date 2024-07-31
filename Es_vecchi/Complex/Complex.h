#ifndef COMPLEX_H
#define COMPLEX_H
#include<iostream>



class Complex
{
private:
    double real, immaginary;
public:

    friend Complex operator+(const Complex&,const Complex&);
    friend Complex operator-(const Complex&,const Complex&);
    friend Complex operator*(const Complex&,const Complex&);
    friend Complex operator/(const Complex&,const Complex&);
    friend Complex operator/(const Complex&,int);
 

    friend Complex operator!(const Complex&);

    friend std::ostream& operator<<(std::ostream& output , const Complex & number );
    

    explicit Complex(double re=0,double im=0):real{re},immaginary{im}{}
    Complex(const Complex& numb):real{numb.real},immaginary{numb.immaginary}{}
    
    Complex& operator=(const Complex&);
    bool operator==(const Complex&);


    double operator()()const;

    
};











#endif