#include <iostream>
#include <fstream>
using namespace std;
//Write a function that finds the size of a file.
size_t fileLength(ifstream& file) {
	size_t currentpos = file.tellg();
	file.seekg(0, ios::end);
	size_t sizefile = file.tellg();
	file.seekg(currentpos);
	return sizefile;
}
