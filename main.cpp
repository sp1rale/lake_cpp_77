#include "Header.h"

int main() {
    Fraction frac1, frac2;

    cout << "Enter the numerator of the first fraction: ";
    cin >> frac1.numerator;

    cout << "Enter the denominator of the first fraction (not equal to zero): ";
    cin >> frac1.denominator;

    cout << "Enter the numerator of the second fraction: ";
    cin >> frac2.numerator;

    cout << "Enter the denominator of the second fraction (not equal to zero): ";
    cin >> frac2.denominator;

    cout << "First fraction: " << frac1.numerator << "/" << frac1.denominator << endl;
    cout << "Second fraction: " << frac2.numerator << "/" << frac2.denominator << endl;

    Fraction sum = addFractions(frac1, frac2);
    sum.toProper();
    cout << "Sum: " << sum.numerator << "/" << sum.denominator << endl;

    Fraction difference = subtractFractions(frac1, frac2);
    difference.toProper();
    cout << "Difference: " << difference.numerator << "/" << difference.denominator << endl;

    Fraction product = multiplyFractions(frac1, frac2);
    product.toProper();
    cout << "Product: " << product.numerator << "/" << product.denominator << endl;

    Fraction quotient = divideFractions(frac1, frac2);
    quotient.toProper();
    cout << "Quotient: " << quotient.numerator << "/" << quotient.denominator << endl;

    return 0;
}