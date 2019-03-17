#ifndef MATRIX_H
#define MATRIX_H
#include <iostream>
#include <array>

class matrix
{
public:
    matrix();
   void input();
   matrix operator+(matrix&c);
    friend std ::ostream&operator<<(std::ostream&cc,const matrix&c);
    friend std ::istream&operator>>(std::istream&,matrix&c);
    void display();
    private:
        int a[2][3];
};

#endif // MATRIX_H
