#include <iostream>
#include<fstream>
using std::cin;
using std::cout;
using std::endl;
//Implement a User structure to hold a given user's name, 
//email, and password. Each field has a maximum length of 128 characters. Make a user writeable and readable to a text file.
//
//Implement a System structure that has an array of Users.The system
//supports a maximum of 100 users.Create methods to save and read an object of type System from a file.

const int MAX_LENGTH = 128;
const int MAX_USERS = 100;
struct User {
	char name[MAX_LENGTH];
	char email[MAX_LENGTH];
	char password[MAX_LENGTH];
};
struct  System {
	User users[MAX_USERS];
	int num=0;
	
};

void writeToFile(System& mysystem) {
	
	std::ofstream file("User.txt",std::ios::app);
	if (!file.is_open()) {
		cout << "Error!";
		return;
	}
	int i = mysystem.num;
	file << mysystem.users[i].name << ' ' << mysystem.users[i].email << ' ' << mysystem.users[i].password << '\n';
	mysystem.num++;
	
	file.close();

}

void readFromFile(System& mysystem) {
	std::ifstream file("User.txt");
	if (!file.is_open()) {
		cout << "Error!";
		return;
	}

	int i = 0;
	while (file >> mysystem.users[i].name >> mysystem.users[i].email >> mysystem.users[i].password) {
		i++;
		if (i >= MAX_USERS) break;
	}

	mysystem.num = i;
	file.close();
}

void registerAnUser(System& mysystem) {

	cout << "Enter Name:" << endl;
	cin >> mysystem.users[0].name;
	cout << "Enter Email:" << endl;
	cin >> mysystem.users[1].email;
	cout << "Enter Password" << endl;
	cin >> mysystem.users[2].password;
	writeToFile(mysystem);
	cout << "Registration successful!" << endl;

}

void login(System& mysystem) {
	char email[MAX_LENGTH];
	char password[MAX_LENGTH];
	cout << "Enter email" << endl;
	cin >> email;
	cout << "Enter password" << endl;
	cin >> password;
	bool found = false;

	for (int i = 0; i < mysystem.num; i++) {
		if (strcmp(email, mysystem.users[i].email) == 0 && strcmp(password, mysystem.users[i].password) == 0) {
			found = true;
			cout << "Login successful" << endl;
			break;
		}
	}

	if (!found) {
		cout << "Incorrect email or password!" << endl;
	}
}


int main() {
	System mysystem;
	readFromFile(mysystem);
	cout << "CHOOSE A COMMAND TO CONTINUE" << endl;
	cout << "1.REGISTER A  USER" << endl;
	cout << "2.LOGIN" << endl;
	cout << "3.EXIT" << endl;

	int n;
	cin >> n;
	switch (n) {
	case 1:
		registerAnUser(mysystem);
		break;
	case 2:

		login(mysystem);
		break;

	case 3:
		return 0;
	default:
		cout << "Error";
		break;
	}
	return 0;

}
