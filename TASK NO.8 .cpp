#include <iostream>
using std::cin;
using std::cout;
using std::endl;

//A group consists of a finite number of students, the number of students being set by you.
//
//Create a structure that describes a group.The structure should also guard the group's GPA.
//
//Make a function that creates a group, taking information from standard input.GPA should be calculated after entering the information.
//Write a function that accepts a groupand a minimum scholarship GPAand returns how many students will receive a scholarship.
//Create a function that accepts a groupand a minimum scholarship GPAand outputs sorted all students who will receive a scholarship next semester.

const int MAX = 50;
struct Student {
	char name[MAX];
	double grade;
};
struct Group {
	Student student[MAX];
	int numberofstudents;
	double gpa;
};
void swap(Student& a, Student& b) {
	Student temp = a;
	a = b;
	b = temp;
}
void selectionSort(Group& group) {
	int n = group.numberofstudents;
	for (int i = 0; i < n; i++) {
		int minIndex = i;
		for (int j = i + 1; j < n; j++) {
			if (group.student[j].grade < group.student[minIndex].grade) {
				minIndex = j;
			}
		}
		if (minIndex != i) {
			swap(group.student[i], group.student[minIndex]);
		}
	}

}
Group creategroup() {
	Group group;
	cout << "Enter number of students:" << endl;
	cin >> group.numberofstudents;
	double totalGPA = 0;
	for (int i = 0; i < group.numberofstudents; i++) {
		cin >> group.student[i].name >> group.student[i].grade;
		totalGPA += group.student[i].grade;
	}
	group.gpa = totalGPA / group.numberofstudents;
	return group;


}
int numScholarship(Group& group, double mingpa) {
	int nrscholar = 0;
	for (int i = 0; i < group.numberofstudents; i++)
	{
		if (group.student[i].grade >= mingpa) {
			nrscholar++;
		}
	}
	return nrscholar;
}



void displayScholarships(Group& group, double mingpa) {
	cout << "students who will receive a scholarship are:" << endl;
	for (int i = 0; i < group.numberofstudents; i++) {
		if (group.student[i].grade >= mingpa) {
			cout << group.student[i].name << "-GPA:" << group.student[i].grade << endl;
		}
	}
}


int main() {
	Group group = creategroup();
	cout << "Group average success:" << group.gpa << endl;
	double mingpa;
	cout << "Enter minimum scholarship GPA: ";
	cin >> mingpa;
	cout << "Number of students receiving a scholarship: " << numScholarship(group, mingpa) << endl;
	selectionSort(group);
	displayScholarships(group, mingpa);
	return 0;
}
