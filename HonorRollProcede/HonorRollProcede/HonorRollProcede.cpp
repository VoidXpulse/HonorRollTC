#include <iostream>
#include <string>

#define MAXCOURSES 8

using namespace std;

int main()
{
	string firstname = "", lastname = "", placeholder, numofcourse, issue;
	bool discplineissue;
	string courses[MAXCOURSES];
	int coursegrades[MAXCOURSES];
	int coursenum, average = 0;
	//declaring all variables and arrays and initializing some


	do {
		cout << "Enter your first name" << endl;
		getline(cin, firstname);
	} while (firstname.length() < 1);//getting first name w/ error trap
	
	do {
		cout << "Enter your last name" << endl;
		getline(cin, lastname);
	} while (lastname.length() < 1);//getting last name w/ error trap
	
	do {
		do {
			cout << "Enter how many courses you are taking. (No more than 8, no less than 1)" << endl;
			getline(cin, numofcourse);
		} while (!(numofcourse.find_first_not_of("0123456789") == string::npos) || numofcourse.length() < 1);//getting coursenum w/ error trap

		coursenum = stoi(numofcourse) ;

	} while (coursenum < 0 || coursenum > 8);

	for (int i = 0; i < coursenum; i++)//looping to class names w/ error trap
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

	for (int i = 0; i < coursenum; i++) //looping to class grades w/ error trap
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

	if (rand() % 2 == 1) {
		discplineissue = false;
	}
	else {
		discplineissue = true;
	}
	//setting discpline issue
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
	//getting average
	

	//printing output
	cout << firstname << " " << lastname <<"\nClass" << left << "     " << "Grade" << left << "\n\n";
	
	for (int i = 0; i < coursenum; i++) {
		cout << courses[i] << left << "     " << coursegrades[i] << left << "\n";
	}

	cout << "\nAverage: " << average << "\n";
	cout << "Disciplinary Infraction: " << issue << "\n";

	if (average > 90 && coursenum >= 5 && !discplineissue) {
		cout << "Congratulations " << firstname << " " << lastname << "! You have made the honor roll. \n";
	}
	else {
		cout << "I am sorry " << firstname << " " << lastname << " but you did not qualify for the honor roll. \n";
	}

}

