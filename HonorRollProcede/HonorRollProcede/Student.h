#pragma once

#include <string>

#define MAXCOURSES 8

using namespace std;

class Student//declaring all methods and variables and constructors.
{
public:
	Student();

	void setValidFirst();
	void setValidLast();
	void setValidCourseNum();
	void setValidCourses();
	void setValidCourseGrades();
	void randomizeInfraction();
	void calcAverage();
	void getOutput();

	int discplineissue;
	int coursenum;
	int average;

	string issue;
	string first;
	string last;

	int coursegrades[MAXCOURSES];
	string courses[MAXCOURSES];
};
