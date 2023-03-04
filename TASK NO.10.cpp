#include <iostream>
#include<fstream>
using std::cin;
using std::cout;
using std::endl;

//Three numbers are read from standard input.Save the sumand their product in a "result.txt" file.
//Make a function that outputs to standard output the difference of the sum and the product read from the file "result.txt".
//The correctness of the data in the file you are reading is guaranteed.

void saveToFile() {
	double a, b, c;
	cin >> a >> b >> c;
	double sum = a + b + c;

	double product = a * b * c;
	std::ofstream file("result.txt");
	if (!file.is_open()) {
		cout << "Error!";
		return ;
	}
	file << sum << ' ' << product;
	file.close();

}
void Difference() {

	std::ifstream file("result.txt");
	double sum, product;
	if (!file.is_open()) {
		cout << "Error!";
		return;
	}
	file >> sum >> product;
	double difference = product-sum;

	cout << "The difference is:" << difference;

}

int main() {
	saveToFile();
	Difference();
}
