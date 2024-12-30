#include <string>

#ifndef COMPLEX_H
#define COMPLEX_H

class complex {

private:
    float r;
    float im;

public:
    //Get real
    float getReal() {
        return r;
    }

    //Get complex
    float getIm() {
        return im;
    }

    //Set real
    void setReal(int x) {
        r = x;
    }

    //Set im
    void setIm(int x) {
        im = x;
    }

    //Returns the sum of 2 complex numbers
    static complex add(complex, complex);

    //Returns a string from a complex number
    static std::string toString_complex(complex);

    //Returns the connubial of a complex number
    static complex conj(complex);

    //Returns the product of 2 complex numbers
    static complex mul(complex, complex);

    //Returns a complex number raised to the power n when n ∈ N
    static complex powComplex(complex, int);
};

#endif
