#include<iostream>
using namespace std;
//To create a structure that represents a complex number.
//
//Create a function that sums two complex numbers.
//
//Create a suitable output function to print complex numbers


struct complex {
	double real;
	double imaginary;
};

complex sum(const complex& reall, const complex& imaginaryy) {
	return { reall.real + reall.real,imaginaryy.imaginary + imaginaryy.imaginary };
}
void printnumbers(const complex& number) {
	cout << number.real << "+" << number.imaginary << "i" << endl;
}


int main() {
	complex a = { 1.0,2.0 };
	complex b = { 3.0,4.0 };
	complex c = sum(a, b);
	printnumbers(c);
		
}
