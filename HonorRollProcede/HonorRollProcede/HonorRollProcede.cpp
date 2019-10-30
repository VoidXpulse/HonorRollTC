// HonorRollProcede.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <string>

using namespace std;

int main()
{
	string name, placeholder;
	string courses[6];
	int coursegrades[6];

	cout << "Enter your first and last name" << endl;
	getline(cin, name);

	for (int i = 0; i < courses->length(); i++)
	{
		do
		{
			switch (i) {
				case(1): {
					cout << "Enter the name of the class you have first.";
					break;
				}
				case(2): {
					cout << "Enter the name of the class you have second.";
					break;
				}
				case(3): {
					cout << "Enter the name of the class you have third.";
					break;
				}
				case(4): {
					cout << "Enter the name of the class you have fourth.";
					break;
				}
				case(5): {
					cout << "Enter the name of the class you have fifth.";
					break;
				}
				case(6): {
					cout << "Enter the name of the class you have sixth.";
					break;
				}
			}
			getline(cin, courses[i]);
		} while (courses[i].length() < 20);
	}

	for (int i = 0; i < courses->length(); i++)
	{
		do
		{
			switch (i) {
			case(1): {
				cout << "Enter the grade you have in the class you have first.";
				break;
			}
			case(2): {
				cout << "Enter the grade you have in the class you have second.";
				break;
			}
			case(3): {
				cout << "Enter the grade you have in the class you have third.";
				break;
			}
			case(4): {
				cout << "Enter the grade you have in the class you have fourth.";
				break;
			}
			case(5): {
				cout << "Enter the grade you have in the class you have fifth.";
				break;
			}
			case(6): {
				cout << "Enter the grade you have in the class you have sixth.";
				break;
			}
			}
			getline(cin, coursegrades[i]);


		} while (courses[i].length() < 20);
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
