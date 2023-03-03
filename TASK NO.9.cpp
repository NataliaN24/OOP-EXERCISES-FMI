#include <iostream>
#include<assert.h>
using namespace std;
//Resolve a Rational struct that is for working with rational numbers.
// Implement collection functions,
//subtraction, multiplication and division.
// Implement a function.Implement a function that takes an instance(object)
//of the new type and returns whether it is a valid rational number, as well as a function that returns whether it is an integer.
struct  rational {
	int numerator;
	int denominator;

};
void  addition(rational& num1,rational&num2) { // this functions doesnt covers all ther results

	int numer1 = num1.numerator * num2.denominator;
	int numer2 = num1.denominator * num2.numerator;
	int all = numer1 + numer2;
	int den = num1.denominator * num2.denominator;
	
	cout << all << "/" << den;
	cout << endl;

}
void substraction(rational& num1, rational& num2) {
	int nume1 = num1.numerator * num2.denominator;
	int nume2 = num1.denominator * num2.numerator;
	int alll = nume1 - nume2;
	int denu = num1.denominator * num2.denominator;

	cout << alll << "/" << denu;
	cout << endl;


}
void multiplication(rational& num1, rational& num2) {
	int nume = num1.numerator * num2.numerator;
	int nume2 = num1.denominator * num2.denominator;
	cout << nume << "/" << nume2;
	cout << endl;

}
void division(rational& num1, rational& num2) {
	int numerat = num1.numerator * num2.denominator;
	int denomin = num1.denominator * num2.numerator;
	cout << numerat << "/" << denomin;
	cout << endl;
}

bool is_rational(const rational& num) {
	return num.denominator != 0;
}

bool is_integer(const rational& num) {
	return num.numerator % num.denominator == 0;
}

int main() {
	rational a = { 1,5 };
	rational b = { 5,6 };
	
	 addition(a, b);
	 substraction(a, b);
	 multiplication(a, b);
	 division(a, b);
	 cout << is_rational(a) << endl;
	 cout << is_integer(a) << endl;
	 cout << is_rational(b) << endl;
	 cout << is_integer(a) << endl;


}
