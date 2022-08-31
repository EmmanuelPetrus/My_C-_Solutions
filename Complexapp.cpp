#include "Complex.h"
using namespace std;

int main(int argc, char const *argv[])
{
    Complex a(1,2);
    Complex b(10,12);
    Complex c(a);
    a.cplx_add(b);
    b.cplx_div(a);
    c.cplx_div(a);
    b.cplx_mul(a);
    c.cplx_sub(b);
    return 0;
}
