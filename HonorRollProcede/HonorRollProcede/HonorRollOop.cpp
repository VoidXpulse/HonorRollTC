#include "GetData.h"
#include "Student.h"
#include <iostream>
#include <string>

using namespace std;


int main()
{

	Student theStudent;

	theStudent.getValidFirst();
	theStudent.getValidLast();

	theStudent.getValidCourseNum();

	theStudent.getValidCourses();
	theStudent.getValidCourseGrades();

	theStudent.calcAverage();

	theStudent.getOutput();

}