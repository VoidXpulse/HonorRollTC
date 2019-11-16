#include "Student.h"
#include "GetData.h"
#include <string>
#include <iostream>
#include <iomanip>

using namespace std;

Student :: Student() {

	coursenum = 0;
	average = 0;

	issue = "NO";
	first = "";
	last = "";

	discplineissue = rand() % 2;

	if (discplineissue) {
		issue = "YES";
	}
	else {
		issue = "NO";
	}

}

void setValidFirst() {

	cout << "Enter your first name" << endl;
	getline(cin, first);

}

void setValidLast() {

	cout << "Enter your last name" << endl;
	getline(cin, last);

}

void setValidCourseNum() {

	do {
	
		cout << "Enter the number of courses you have." << endl;

	} while (getValidInt(coursenum));

}

void setValidCourses() {

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

void setValidCourseGrades() {

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

void randomizeInfraction() {
	discplineissue = rand() % 2;

	if (discplineissue) {
		issue = "YES";
	}
	else {
		issue = "NO";
	}
}

void calcAverage() {
	for (int i = 0; i < coursenum; i++) {
		average += coursegrades[i];
	}

	average = average / coursenum;
}

void getOutput() {
	cout << name << "\nClass" << left << "     " << "Grade" << left << "\n\n";

	for (int i = 0; i < coursenum; i++) {
		cout << courses[i] << left << "     " << coursegrades[i] << left << "\n";
	}

	cout << "\nAverage: " << average << "\n";
	cout << "Disciplinary Infraction: " << issue << "\n";

	if (average > 90 && coursenum >= 5 && discplineissue) {
		cout << "Congratulations " << name << "! You have made the honor roll.";
	}
	else {
		cout << "I’m sorry " << name << " but you didn’t qualify for the honor roll.";
	}
}