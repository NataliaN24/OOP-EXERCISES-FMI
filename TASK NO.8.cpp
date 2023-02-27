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
	char name[50];
	double grade;
};
struct Group {
	int numberofstudents;
	double gpa;
};

void inputdata(Student mystudent[], Group& mygroup) {
	cout << "enter nr of students in the group:";
	cin >> mygroup.numberofstudents;
	mygroup.gpa = 0;
	
	for (int i = 0; i < mygroup.numberofstudents; i++) {
		cin >> mystudent[i].name >> mystudent[i] .grade;
		mygroup.gpa += mystudent[i].grade;
	}
	mygroup.gpa /= mygroup.numberofstudents;


}
void  readinput(Student mystudent[], Group& mygroup) {
	for (int i = 0; i < mygroup.numberofstudents; i++) {
		cout << mystudent[i].name <<' '<< endl << mystudent[i].grade<<' '<<endl;
		
	}
	cout << "GROUP GPA IS:";
	cout << mygroup.gpa << endl;

}
void provideScholarship(Student mystud[], Group& mygroup) {
	double minimumScholarship = 5.5;
	int num = 0;
	
	for (int i = 0; i < mygroup.numberofstudents; i++) {
		if (mystud[i].grade >= minimumScholarship) {
			num++;
		}

	}
	cout << "Number of student who will gain a scholarship is:" << num << endl;


	cout << "STUDETNS WHO WILL GAIN A SCHOLARSHIP BASED ON THEIR GPA ARE:" << endl;
	for (int i = 0; i < mygroup.numberofstudents; i++) {
		for(int j=0;j<num;j++){
		if (mystud[j].grade <= mystud[j+1].grade) {
			Student temp = mystud[j];
			mystud[j] = mystud[j + 1];
			mystud[j + 1] = temp;
				
			}
		}

	}
	for (int i = 0; i < mygroup.numberofstudents; i++) {
		if (mystud[i].grade >= minimumScholarship) {
			cout << mystud[i].name << ' ' << mystud[i].grade;
		}
	}


}

int main() {
	cout << "Enter datas for students" << endl;
	Student mystudent[MAX];
	Group mygroup;
	inputdata(mystudent, mygroup);
	cout << "STUDENTS AND THEIR GRADES ARE:" << endl;
	readinput(mystudent, mygroup);
	provideScholarship(mystudent, mygroup);
}
