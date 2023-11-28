#include <iostream>
#include <cmath>

using namespace std;

int findGCD(int a, int b) {
    while (b != 0) {
        int temp = b;
        b = a % b;
        a = temp;
    }
    return a;
}

struct Fraction {
    int numerator;
    int denominator;

    void simplify() {
        int gcd = findGCD(abs(numerator), abs(denominator));
        numerator /= gcd;
        denominator /= gcd;
    }

    void toProper() {
        if (numerator >= denominator) {
            int wholePart = numerator / denominator;
            numerator %= denominator;
            cout << "Whole part: " << wholePart << ", ";
        }
    }
};

Fraction addFractions(const Fraction& frac1, const Fraction& frac2) {
    Fraction result;
    result.numerator = frac1.numerator * frac2.denominator + frac2.numerator * frac1.denominator;
    result.denominator = frac1.denominator * frac2.denominator;
    result.simplify();
    return result;
}

Fraction subtractFractions(const Fraction& frac1, const Fraction& frac2) {
    Fraction result;
    result.numerator = frac1.numerator * frac2.denominator - frac2.numerator * frac1.denominator;
    result.denominator = frac1.denominator * frac2.denominator;
    result.simplify();
    return result;
}


Fraction multiplyFractions(const Fraction& frac1, const Fraction& frac2) {
    Fraction result;
    result.numerator = frac1.numerator * frac2.numerator;
    result.denominator = frac1.denominator * frac2.denominator;
    result.simplify();
    return result;
}

Fraction divideFractions(const Fraction& frac1, const Fraction& frac2) {
    Fraction result;
    result.numerator = frac1.numerator * frac2.denominator;
    result.denominator = frac1.denominator * frac2.numerator;
    result.simplify();
    return result;
}
