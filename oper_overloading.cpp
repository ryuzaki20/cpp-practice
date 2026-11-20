#include <iostream>
using namespace std;

class Complex {
    int real, imag;

public:
    void input() {
        cin >> real >> imag;
    }

    Complex operator+(Complex c) {
        Complex temp;

        // Calculate real part
        temp.real = real + c.real;
        // Calculate imaginary parft
        temp.imag = imag + c.imag;

        return temp;
    }

    void display() {
        cout << real << " + " << imag << "i";
    }
};

int main() {
    Complex c1, c2, c3;

    cout << "Enter first complex number: ";
    c1.input();

    cout << "Enter second complex number: ";
    c2.input();

    c3 = c1 + c2;

    cout << "Result: ";
    c3.display();

    return 0;
}