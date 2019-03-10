#include "matrix.h"
#include <iomanip>
using namespace std;
ostream &operator <<(ostream&output,const matrix&number)
{
   output<<number.a<<endl<<number.b<<endl<<number.c;
    return output;
}
istream&operator>>(istream&input,matrix&number)
{

    input>>setw(3)>>number.a;
    input.ignore();
    input>>setw(3)>>number.b;
    input.ignore();
    input>>setw(3)>>number.c;
    return input;
}
