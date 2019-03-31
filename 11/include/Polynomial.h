#ifndef POLYNOMIAL_H
#define POLYNOMIAL_H
class Polynomial
{
public:
 void Input();
    void Output();
    Polynomial operator+(const Polynomial&);
    Polynomial operator-(const Polynomial&);
private:
    int degree;
    int *coeff;
};

#endif
