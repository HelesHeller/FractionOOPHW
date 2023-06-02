#include "fraction.h"
#include <iostream>
#include<Windows.h>

using namespace std;

int main() {

	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);

	Fraction fraction1;
	fraction1.input();

	Fraction fraction2;
	fraction2.input();

	Fraction sum = fraction1.add(fraction2);
	cout << "Sum: ";
	sum.display();

	Fraction difference = fraction1.subtract(fraction2);
	cout << "Difference: ";
	difference.display();

	Fraction product = fraction1.multiply(fraction2);
	cout << "Product: ";
	product.display();

	Fraction quotient = fraction1.divide(fraction2);
	cout << "Quotient: ";
	quotient.display();

	return 0;
}
