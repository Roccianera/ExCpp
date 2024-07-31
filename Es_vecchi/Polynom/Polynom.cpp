

#include "Polynom.h"


bool operator==(const Polynom &lhs, const Polynom &rhs) {
    if (lhs.size != rhs.size) {
        // se le dimensioni non corrispondono, sicuramente non sono uguali i due polinomi
        return false;
    } else {
        for (int i = 0; i < rhs.size; ++i) {
            if (lhs.coefs[i] != rhs.coefs[i]) {
                // confronto tutti i coefficienti
                return false;
            }
        }
    }
    return true;
}

Polynom::Polynom() : size{1}, coefs{new double[1]} {
    coefs[0] = 0.0;
}

Polynom::Polynom(double const_term) : size{1}, coefs{new double[1]} {
    coefs[0] = const_term;
}

Polynom::Polynom(const double coefficients[], int _size) : size{_size}, coefs{new double[_size]} {
    for (int i = 0; i < size; i++) {
        coefs[i] = coefficients[i];
    }
}


Polynom::Polynom(const Polynom &rhs) : size{rhs.size}, coefs{new double[rhs.size]} {
    for (int i = 0; i < size; i++) {
        coefs[i] = rhs.coefs[i];
    }
}


Polynom::~Polynom() {
    delete[] coefs;
}

int Polynom::degree() const {
    return size - 1;
}

// stampa del polinomio. &out di default è std::cout
void Polynom::print(std::ostream &out) const {
    if (size == 0) {
        // niente da stampare
        return;
    }

    for (int i = size - 1; i > 0; i--) {
        out << coefs[i] << " x^" << i << " + ";
    }
    out << coefs[0];        // termine noto
}

Polynom Polynom::operator+=(const Polynom &rhs) {

    int newSize = (rhs.size > size) ? rhs.size : size;
    // nuovo array dei coefficienti, inizializzato a 0 con la lista {}
    auto *newCoef = new double[newSize]{};
    // aggiungo i coefficienti del primo e del secondo polinomio
    for (int i = 0; i < rhs.size; i++) {
        newCoef[i] += rhs.coefs[i];
    }
    for (int i = 0; i < size; i++) {
        newCoef[i] += coefs[i];
    }
    // pulisco il vecchio array coefs
    delete[] coefs;
    // setto il puntatore coefs all'array nuovo
    coefs = newCoef;
    size = newSize;
    // il tipo dell'operatore è Polynom, quindi ritorno l'oggetto puntato dal puntatore this
    return *this;
}

// moltiplicazione per una costante
Polynom Polynom::operator*=(double rhs) {
    for (int i = 0; i < size; i++) {
        coefs[i] *= rhs;
    }
    return *this;
}

// operatore di assegnazione
Polynom& Polynom::operator=(const Polynom &rhs) {
    if (this == &rhs) {
        return *this;
        // se erano già uguali non c'è bisogno di effettuare l'assegnazione
    } else {
        // cancello il vecchio array
        delete[] coefs;
        // creo il nuovo array e assegno i coefficienti
        coefs = new double[rhs.size];
        size = rhs.size;
        for (int i = 0; i < size; ++i) {
            coefs[i] = rhs.coefs[i];
        }
    }
    return *this;
}


Polynom operator+(const Polynom &lhs, const Polynom &rhs) {
    Polynom tmp{lhs};
    tmp += rhs;
    return tmp;
}


Polynom operator*(const Polynom &lhs, double rhs) {
    Polynom tmp{lhs};
    tmp *= rhs;
    return tmp;
}

Polynom operator*(double lhs, const Polynom &rhs) {
    return rhs * lhs;
}


Polynom operator*(const Polynom &lhs, const Polynom &rhs) {
    int product_size=lhs.degree()+rhs.degree()+1;
    
    double* product{new double[product_size]{}};

    for(int i{0}; i<product_size;i++){
        for(int j{0};j<rhs.size;j++){
            for(int k{0};k<lhs.size;k++){
                if(k+j==i)
                    product[i]+=lhs.coefs[k]*rhs.coefs[j];
            }
        }
    }  
    
    Polynom result{product,product_size};
    delete[] product;
    return result;

}

std::ostream &operator<<(std::ostream &out, const Polynom &rhs) {
    rhs.print(out);
    return out;
}