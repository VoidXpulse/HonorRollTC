#include "Student.h"
#include "GetData.h"
#include <string>
#include <iostream>
#include <iomanip>

using namespace std;

Student :: Student() {//Student Constructor. Initializes most variables.

	coursenum = 0;
	average = 0;

	issue = "NO";
	first = "";
	last = "";

	if (rand() % 2 == 1) {
		discplineissue = false;
	}
	else {
		discplineissue = true;
	}

	if (discplineissue) {
		issue = "YES";
	}
	else {
		issue = "NO";
	}

}

void Student :: setValidFirst() {//sets the first name of the user

	do {
		cout << "Enter your first name" << endl;
		getline(cin, first);
	} while (first.length() < 1);

}

void Student:: setValidLast() {//sets the last name of the user

	do {
		cout << "Enter your last name" << endl;
		getline(cin, last);
	} while (last.length() < 1);

}

void Student:: setValidCourseNum() {//sets the number of courses the user has

	do {
		do {

			cout << "Enter the number of courses you have." << endl;

		} while (!getValidInt(coursenum));
	} while (coursenum > 8 || coursenum < 1);
}

void Student:: setValidCourses() {//sets the names of the courses the user has

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

void Student:: setValidCourseGrades() { //sets the grades the user has 

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
			} while (!getValidInt(coursegrades[i]));
		} while (coursegrades[i] > 100 || coursegrades[i] < 0);
	}

}

void Student:: randomizeInfraction() {//randomizes the infraction
	if (rand() % 2 == 1) {
		discplineissue = false;
	}
	else {
		discplineissue = true;
	}

	if (discplineissue) {
		issue = "YES";
	}
	else {
		issue = "NO";
	}
}

void Student:: calcAverage() {//calculates the average of the grades
	for (int i = 0; i < coursenum; i++) {
		average += coursegrades[i];
	}

	average = average / coursenum;
}

void Student:: getOutput() {//sends output.
	cout << "\n" << first << " " << last << "\nClass" << left << " " << "Grade" << left << "\n\n";

	for (int i = 0; i < coursenum; i++) {
		cout << courses[i] << left << " " << coursegrades[i] << left << "\n";
	}

	cout << "\nAverage: " << average << "\n";
	cout << "Disciplinary Infraction: " << issue << "\n";

	if (average >= 90 && coursenum >= 5 && !discplineissue) {
		cout << "Congratulations " << first << " " << last << "! You have made the honor roll. \n";
	}
	else {
		cout << "I am sorry " << first << " " << last << " but you did not qualify for the honor roll. \n";
	}
}