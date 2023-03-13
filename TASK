#include <iostream>
#include <fstream>
#include <sstream>
using namespace std;

//To write a function that replaces every occurrence of a character in a file with another character.
//The contents of the file should not be loaded into memory.
#include <iostream>
#include <fstream>

using namespace std;

void writetofile() {
    ofstream file("find.dat", ios::binary);
    if (!file.is_open()) {
        cerr << "Error opening file for writing" << endl;
        return;
    }
    char symbols[] = "abcdef.frs.fdfasd";
    file.write((const char*)&symbols, sizeof(symbols));
    file.close();
}

void readfromfile() {
    ifstream file("find.dat", ios::binary);
    if (!file.is_open()) {
        cerr << "Error opening file for reading" << endl;
        return;
    }
    char ch;
    ofstream outfile("temp.dat", ios::binary);
    if (!outfile.is_open()) {
        cerr << "Error opening file for writing" << endl;
        file.close();
        return;
    }
    while (file.read((char*)&ch, sizeof(char))) {
        if (ch == 'a') {
            outfile.write("!", sizeof(char));
        }
        else {
            outfile.write((const char*)&ch, sizeof(char));
        }
    }
    outfile.close();
    file.close();
    remove("find.dat");
    rename("temp.dat", "find.dat");
}

int main() {
    writetofile();
    readfromfile();
    ifstream file("find.dat", ios::binary);
    if (!file.is_open()) {
        cerr << "Error opening file for reading" << endl;
        return 0;
    }
    char ch;
    while (file.read((char*)&ch, sizeof(char))) {
        cout << ch;
    }
    cout << endl;
    file.close();
    return 0;
}
