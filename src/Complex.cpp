#include <string>
#include <cmath>
#include "Complex.hpp"

    //Returns the sum of 2 complex numbers
    complex complex::add(complex x, complex y) {
        complex c{};
        c.r = x.r+y.r;
        c.im = x.im+y.im;
        return c;
    }

    //Returns a string from a complex number
    std::string complex::toString_complex(complex x) {
        if (x.im == 0) {
            return std::to_string(x.r);
        }
        if (x.r == 0) {
            return std::to_string(x.im) + "i";
        }
        return std::to_string(x.r) + " + " + std::to_string(x.im) + "i";
    }

    //Returns the connubial of a complex number
    complex complex::conj(complex x) {
        complex c{};
        c.r = x.r;
        c.im = -x.im;
        return c;
    }
    
    //Returns the product of 2 complex numbers
    complex complex::mul(complex x, complex y) {
        complex c{};
        c.r = (x.r*y.r) - (x.im*y.im);
        c.im = (x.r*y.im) + (y.r*x.im);
        return c;
    }

    //Returns a complex number raised to the power n when n ∈ N
    complex complex::powComplex(complex x, int n) {
        complex x1 = x;
        for (int i = 1; i < n; i++) {
            x = mul(x,x1);
        }
        complex c = x;
        return c;
    }
