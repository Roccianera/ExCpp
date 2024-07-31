#include <iostream>
#include "Complex.h"
#include <string>
#include <math.h>




Complex operator+(const Complex& number1,const Complex& number2){
    Complex sum{number1};
    sum.real+=number2.real;
    sum.immaginary+=number2.immaginary;
    return sum;
}

Complex& Complex::operator=(const Complex&number){
    real=number.real;
    immaginary=number.immaginary;
    return *this;
}

Complex operator-(const Complex& number1,const Complex& number2){
    Complex sum{number1};
    sum.real-=number2.real;
    sum.immaginary-=number2.immaginary;
    return sum;
}


Complex operator*(const Complex& number1,const Complex& number2){
    Complex sum;
    sum.real= (number1.real*number2.real)-(number1.immaginary*number2.immaginary);
    sum.immaginary= number1.real*number2.immaginary + number1.immaginary*number2.real;
    return sum;
}
Complex operator!(const Complex& number){
    Complex coniugate{number.real,-number.immaginary};
    return coniugate;
}

Complex operator/(const Complex& number1,const Complex& number2){
    
    Complex ris;
    
    double denominator= number2.real*number2.real + number2.immaginary*number2.immaginary;
    ris=number1*(!number2);         
    ris.real/=denominator;
    ris.immaginary/=denominator;
    
    return ris;
}


Complex operator/(const Complex& number, int k){
    Complex number1{number};
    number1.real/=k;
    number1.immaginary/=k;
    return number1;
}



std::ostream& operator<<(std::ostream& output , const Complex & number ){
    std::string op{""} ;
    
    if(number.immaginary>=0) op="+";
    output<<number.real<<op<<number.immaginary<<"i";
}


double Complex::operator()()const{


    return sqrt(real*real + immaginary*immaginary);
}