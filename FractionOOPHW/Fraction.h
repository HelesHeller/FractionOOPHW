
#ifndef FRACTION_H
#define FRACTION_H

class Fraction {
private:
	int numerator;
	int denominator;

public:
	Fraction();
	Fraction(int numerator, int denominator);

	void input();
	void display();

	Fraction add(const Fraction& other);
	Fraction subtract(const Fraction& other);
	Fraction multiply(const Fraction& other);
	Fraction divide(const Fraction& other);
};

#endif
