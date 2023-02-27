#include <iostream>
using std::cin;
using std::cout;
using std::endl;

//Implement functions that, given two integers, return the smaller of them by passing the numbers by value
//, as a pointer and by reference(alias).
//Use the const keyword and demonstrate with examples when it is possible (and when not) to use each of the functions.


int smallerbypointer(int *a, int *b) {

	if (*a < *b) {
		return *a;
	}
	else if (*a == *b) {
		return -1;
	}
	else {
		return *b;
	}

}

int smallnr(int a, int b) {
	if (a < b) {
		return a;
	}
	else if (a == b) {
		return -1;
	}
	else {
		return b;
	}
}

int smallbyreference(int& a, int& b) {
	if (a < b) {
		return a;
	}
	else if (a == b) {
		return -1;
	}
	else {
		return b;
	}
}

int main() {
	int a;
	int b;
	cout << "enter numbers" << endl;
	cin >> a >> b;
	cout << smallerbypointer(&a, &b)<<endl;
	cout << smallbyreference(a, b)<<endl;
	cout << smallnr(a, b)<<endl;
	
}
