#include <assert.h>

#include "atof.h"

int main() {
    assert(atof("114.514") == 114.514);
    assert(atof(" \n\t+123.45") == 123.45);
    assert(atof("-654321.") == -654321.0);
    assert(atof("+.75") == 0.75);
    assert(atof("-.625@") == -0.625);
    assert(atof("0") == 0.0);
    assert(atof("123abc") == 123.0);
    assert(atof("abc") == 0.0);
    assert(atof(".") == 0.0);
    assert(atof("") == 0.0);

    assert(atof("1.5e3") == 1.5e3);
    assert(atof("3E-2") == 3e-2);
    assert(atof("-4.25E+4") == -4.25e4);
    assert(atof("e3") == 0.0);
    assert(atof(".12345e2") == 12.345);
    assert(atof(".e8") == 0.0);
    assert(atof("2e") == 2.0);
    return 0;
}
