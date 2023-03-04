#include <iostream>
#include<fstream>
using std::cin;
using std::cout;
using std::endl;

//Write a suitably parameterized function lengthOfFile(...) that returns how many characters are in a text file.

size_t lengthOfFile(const char *name) {

	std::ifstream file(name);
	if (!file.is_open()) {
		cout << "Error!";
		return -1;
	}
	file.seekg(0, std::ios::end);
	size_t Position = file.tellg();

	file.close();
	return Position;

}

int main() {
	cout << lengthOfFile("result.txt");
}
