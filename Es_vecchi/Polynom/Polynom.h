#ifndef POLYNOM_H
#define POLYNOM_H
#include <iostream>

#include <iostream>

class Polynom {
  friend bool operator==(const Polynom &lhs, const Polynom &rhs);
  friend Polynom operator*(const Polynom &lhs, const Polynom &rhs);

 private:
  int size;       // grado+1
  double *coefs;  // coefficienti
 public:
  // costruttori
  Polynom();                                        // default
  Polynom(const double coefficients[], int _size);  // completo
  Polynom(const Polynom &rhs);                  // costruttore copia
  explicit Polynom(double const_term);              // grado 0

  ~Polynom();  // distruttore

  int degree() const;                               // grado del polinomio
  void print(std::ostream &out = std::cout) const;  // stampa a video

  // operatori di assegnazione
  Polynom &operator=(const Polynom &rhs);
  Polynom operator+=(const Polynom &rhs);
  Polynom operator*=(double rhs);
};

Polynom operator+(const Polynom &lhs, const Polynom &rhs);

Polynom operator*(const Polynom &lhs, double rhs);
Polynom operator*(double lhs, const Polynom &rhs);

std::ostream &operator<<(std::ostream &out, const Polynom &rhs);

#endif