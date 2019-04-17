#ifndef STUDENT_H
#define STUDENT_H

#include "degree.h"
#include <string>
#include <iostream>
using namespace std;

class Student {
public:
	Student();
	Student(string studentId, string firstName, string lastName, string emailAddress, string age, int daysInCourse1, int daysInCourse2, int daysInCourse3);
	~Student();
	//2a - Accessors
	string GetStudentId();
	string GetFirstName();
	string GetLastName();
	string GetEmailAddress();
	string GetStudentAge();
	int GetDaysCourseComplete();
	virtual Degree GetDegreeProgram() = 0; //pure virtual func - set in subclass
	//2b - Mutators
	void SetStudentId(string studentId);
	void SetFirstName(string firstName);
	void SetLastName(string lastName);
	void SetEmailAddress(string emailAddress);
	void SetStudentAge(string studentAge);
	void SetDaysCourseComplete(int *daysCourseComplete[3]);
	virtual void printData();
private:
	string* studentId;
	string* firstName;
	string* lastName;
	string* emailAddress;
	string* studentAge;
	int* daysCourseComplete[3];
protected:
	Degree* degreeType; //populated in subclasses
};

#endif