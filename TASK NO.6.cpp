#include <iostream>
using std::cin;
using std::cout;
using std::endl;

//Write a program to model a point (structure Point) in the Cartesian plane.
//
//To implement the following functionality:
//
//Point can be read from standard input.
//Point to be able to print to stdout in appropriate format.
//Be able to find the distance from the center of the plane(0.0, 0.0) to a given point.
//Be able to find distance between two points.
//Bonus :
//
//At a given point, determine which quadrant it is in.
//On a given circle with radius r and center origin of the coordinate system, deduce whether point K is in this circle or on its contour.

struct Point {
	int x;
	int y;

};

void readPoint(Point& mypoint) {
	cout << endl;
	cout << "x coordinate:";
	cout << mypoint.x;
	cout << endl;
	cout << "y coordinate:";
	cout << mypoint.y;
}
double finddistance(Point& mypoint) {
	double dx = mypoint.x * mypoint.x;
	double  dy = mypoint.y * mypoint.y;
	return sqrt(dx + dy);

}
double distance(Point& mypoint1,Point&mypoint2) {
	double dx = mypoint1.x - mypoint2.x;
	double  dy = mypoint2.y - mypoint2.y;
	return sqrt(dx*dx + dy*dy);

}
void quadrant(Point& mypoint) {

	if (mypoint.x > 0 & mypoint.y > 0) {
		cout << "FIRST QUADRANT";
	}
	else if (mypoint.x < 0 & mypoint.y > 0) {
		cout << "SECOND QUADRANT";
	}
	else if (mypoint.x < 0 & mypoint.y < 0) {
		cout << "THIRD QUADRANT";
	}
	else if (mypoint.x > 0 & mypoint.y < 0) {
		cout << "FOURTH QUADRANT";
	}

}
void isOnCircle(Point& mypoint,const int radius) {

	double rad = radius * radius;
	double dx = mypoint.x * mypoint.x;
	double  dy = mypoint.y * mypoint.y;
	double equation = dx + dy;
	if (equation == rad) {
		cout << "The point lies on circle counture";

	}
	else if (equation < rad) {
		cout << "The point lies inside circle ";

	}
	else if (equation > rad) {
		cout << "The point lies outside circle ";
	}

}

int main() {
	Point mypoint1 = { 3,4 };
	Point mypoint2 = { 5,4 };
	cout << "the coordinates of the first point are:";
	readPoint(mypoint1);
	cout << endl;
	cout << "the coordinates of the second point are:";
	readPoint(mypoint2);
	cout << "Distance from point 1 to center:";
	cout << finddistance(mypoint1);
	cout << endl;
	cout << "Distance from point 2 to center:";
	cout << finddistance(mypoint2);
	cout << endl;
	cout << "Distance between 2 points:";
	cout << distance(mypoint1,mypoint2);
	cout << endl;
	cout << "The quadrant in which the point lies is:";
		quadrant(mypoint1);
		cout << endl;
		int radius;
		cout << "Input the radius for the circle:";
		cin >> radius;
		isOnCircle(mypoint1,radius);

}
