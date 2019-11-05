// HonorRollProcede.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <string>

#define MAXCOURSES 8

using namespace std;


int main()
{
	string name, placeholder, numofcourse, issue;
	bool discplineissue;
	string courses[MAXCOURSES];
	int coursegrades[MAXCOURSES];
	int coursenum, average = 0;

	cout << "Enter your first and last name" << endl;
	getline(cin, name);
	do {
		do {
			cout << "Enter how many courses you are taking. (No more than 8, no less than 1)" << endl;
			getline(cin, numofcourse);
		} while (!(numofcourse.find_first_not_of("0123456789") == string::npos));

		coursenum = stoi(numofcourse);

	} while (coursenum < 0 || coursenum > 9);

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
				getline(cin, placeholder);


			} while (placeholder.find_first_not_of("0123456789") != string::npos);
			coursegrades[i] = stoi(placeholder);
		} while (coursegrades[i] > 100 || coursegrades[i] < 0);
	}

	discplineissue = rand() % 2;

	if (discplineissue) {
		issue = "YES";
	}
	else {
		issue = "NO";
	}

	for (int i = 0; i < coursenum; i++) {
		average += coursegrades[i];
	}

	average = average / coursenum;

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

// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file
