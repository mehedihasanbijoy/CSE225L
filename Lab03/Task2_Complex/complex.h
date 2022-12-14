#ifndef COMPLEX_H_INCLUDED
#define COMPLEX_H_INCLUDED

class Complex{
    private:
        double real, imaginary;

    public:
        Complex();
        Complex(double, double);
        void Print();
        Complex operator+(Complex);
        Complex operator-(Complex);
        Complex operator*(Complex);
        Complex operator/(Complex);
        bool operator==(Complex);
        bool operator!=(Complex);
        bool operator>(Complex);
        bool operator<(Complex);
};

#endif // COMPLEX_H_INCLUDED
