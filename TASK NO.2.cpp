#include<iostream>
using std::cout;
using std::cin;
using std::endl;

//Read an integer N from standard input followed by N number of integers.
//Read one character from standard input.Find the number of these integers from
//inputs that are greater than the ASCII code of the character. For this purpose, use dynamic memory and functions.

void inputarray(int *arr,const int N) {

	for (int i = 0; i < N; i++) {
		cin >> arr[i];
	}
}

int findnr(const int* arr,const int N, char symbol) {
	int number = 0;
	for (int i = 0; i < N; i++) {
		if (arr[i] > int(symbol)) {
			number++;
		}

	}
	return number;
}


int main() {
	int N;
	cin >> N;
	int* arr = new int[N];
	inputarray(arr, N);
	char symbol;
	cin >> symbol;
	cout<<findnr(arr, N, symbol);
	delete[]arr;
	return 0;
}
