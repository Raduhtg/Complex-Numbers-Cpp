#include <string>

#ifndef COMPLEX_H
#define COMPLEX_H

class complex {

private:
    float r;
    float im;

public:
    //get real
    float getReal() {
        return r;
    }

    //get complex
    float getIm() {
        return im;
    }

    //set real
    void setReal(int x) {
        r = x;
    }

    //set im
    void setIm(int x) {
        im = x;
    }

    //adunare nr complexe
    static complex add(complex, complex);

    //print nr complex
    static std::string toString_complex(complex);

    //calcularea conjugatei
    static complex conj(complex);

    //inmultire
    static complex mul(complex, complex);

    //ridicare la putere n (n apartine nr naturale)
    static complex powComplex(complex, int);
};

#endif
