#ifndef STUDENT_H
#define STUDENT_H

#include "degree.h"
#include <string>
#include <iostream>
using namespace std;

class Student {
public:
	Student();
	Student(string studentId, string firstName, string lastName, string emailAddress, string age, int daysInCourse[], Degree type);
	~Student();
	//Student& operator=(const Student& objToCopy); //FIX ME!! Need this here?
	//2a - Accessors
	string GetStudentId();
	string GetFirstName();
	string GetLastName();
	string GetEmailAddress();
	string GetStudentAge();
	int* GetDaysInCourse();
	virtual Degree GetDegreeProgram();
	//2b - Mutators
	void SetStudentId(string studentId);
	void SetFirstName(string firstName);
	void SetLastName(string lastName);
	void SetEmailAddress(string emailAddress);
	void SetStudentAge(string studentAge);
	void SetDaysCourseComplete(int daysInCourse[]);
	//virtual void printData();
private:
	string studentId;
	string firstName;
	string lastName;
	string emailAddress;
	string studentAge;
	int *daysInCourse;
	Student *dataObj; //FIX ME!! need this? 
protected:
	Degree degreeType; //populated in subclasses
};

#endif