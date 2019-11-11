#include "Student.h"
#include "GetData.h"

#define MAXCOURSES 8

Student() {

	int discplineissue;
	string issue, first, last;

	discplineissue = rand() % 2;

	if (discplineissue) {
		issue = "YES";
	}
	else {
		issue = "NO";
	}

}

void getValidFirst() {

	cout << "Enter your first name" << endl;
	getline(cin, first);

}

void getValidLast() {

	cout << "Enter your last name" << endl;
	getline(cin, last);

}

void getValidCourseNum() {

	do {} while (getValidInt(coursenum);

}

void getValidCourses() {

	for (int i = 0; i < coursenum; i++)
	{

		do
		{
			switch (i) {
			case(0): {
				cout << "Enter the name of the class you have first." << endl;
				break;
			}
			case(1): {
				cout << "Enter the name of the class you have second." << endl;
				break;
			}
			case(2): {
				cout << "Enter the name of the class you have third." << endl;
				break;
			}
			case(3): {
				cout << "Enter the name of the class you have fourth." << endl;
				break;
			}
			case(4): {
				cout << "Enter the name of the class you have fifth." << endl;
				break;
			}
			case(5): {
				cout << "Enter the name of the class you have sixth." << endl;
				break;
			}
			case(6): {
				cout << "Enter the name of the class you have seventh." << endl;
				break;
			}
			case(7): {
				cout << "Enter the name of the class you have eighth." << endl;
				break;
			}
			default: {
				cout << "You screwed up.";
				break;
			}
			}
			getline(cin, courses[i]);
		} while (courses[i].length() > 20 || courses[i].length() < 1);
	}

}

void getValidCourseGrades() {

	for (int i = 0; i < coursenum; i++)
	{
		do {
			do
			{
				switch (i) {
				case(0): {
					cout << "Enter the grade you have in the class you have first." << endl;
					break;
				}
				case(1): {
					cout << "Enter the grade you have in the class you have second." << endl;
					break;
				}
				case(2): {
					cout << "Enter the grade you have in the class you have third." << endl;
					break;
				}
				case(3): {
					cout << "Enter the grade you have in the class you have fourth." << endl;
					break;
				}
				case(4): {
					cout << "Enter the grade you have in the class you have fifth." << endl;
					break;
				}
				case(5): {
					cout << "Enter the grade you have in the class you have sixth." << endl;
					break;
				}
				case(6): {
					cout << "Enter the grade you have in the class you have seventh." << endl;
					break;
				}
				case(7): {
					cout << "Enter the grade you have in the class you have eighth." << endl;
					break;
				}
				}
			} while (getValidInt(coursegrades[i]));
		} while (coursegrades[i] > 100 || coursegrades[i] < 0);
	}

}