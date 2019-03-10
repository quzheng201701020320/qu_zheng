#ifndef MATRIX_H
#define MATRIX_H
#include <iostream>
#include <string>

class matrix
{
    friend std::ostream&operator<<(std::ostream&,const matrix&);
    friend std::istream&operator>>(std::istream&,matrix&);
    private:
    std::string a;
    std::string b;
    std::string c;
};

#endif // MATRIX_H
