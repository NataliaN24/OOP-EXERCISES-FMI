#include<iostream>
using namespace std;
//Create a structure describing a student.Each student is defined by :
//
//name (up to 30 characters)
//faculty number (non-negative integer)
//For each of the examples below, demonstrate which operations are possible and which are not.
//Possible operations are redefining the variable and changing the fields.
//Create a suitably parameterized function initStudent(...); which enters correct data for a student.
//
//To write a function that prints student.
//
//You can use helper functions.


struct student {
	char name[30];
	int number;

};

void initStudent(student& mystud) {
	cin >> mystud.name >> mystud.number;

}
void printStudent(student& mystud) {
	cout << "student name"<<endl;
	cout << mystud.name;
	cout << endl;
	cout << "student number"<<endl;
	cout << mystud.number;
}


int main() {
	student mystudent;
	initStudent(mystudent);
	printStudent(mystudent);

}
