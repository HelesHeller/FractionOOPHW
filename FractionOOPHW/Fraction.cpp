
#include "fraction.h"
#include <iostream>

using namespace std;

Fraction::Fraction() : numerator(0), denominator(1) {}

Fraction::Fraction(int numerator, int denominator) : numerator(numerator), denominator(denominator) {}

void Fraction::input() {
	cout << "Enter numerator: ";
	cin >> numerator;

	cout << "Enter denominator: ";
	cin >> denominator;
}

void Fraction::display() {
	cout << numerator << "/" << denominator << std::endl;
}

Fraction Fraction::add(const Fraction& other) {
	int resultNum = numerator * other.denominator + other.numerator * denominator;
	int resultDen = denominator * other.denominator;
	return Fraction(resultNum, resultDen);
}

Fraction Fraction::subtract(const Fraction& other) {
	int resultNum = numerator * other.denominator - other.numerator * denominator;
	int resultDen = denominator * other.denominator;
	return Fraction(resultNum, resultDen);
}

Fraction Fraction::multiply(const Fraction& other) {
	int resultNum = numerator * other.numerator;
	int resultDen = denominator * other.denominator;
	return Fraction(resultNum, resultDen);
}

Fraction Fraction::divide(const Fraction& other) {
	int resultNum = numerator * other.denominator;
	int resultDen = denominator * other.numerator;
	return Fraction(resultNum, resultDen);
}
