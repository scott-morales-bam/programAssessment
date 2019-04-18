#ifndef ROSTER_H
#define ROSTER_H

#include <iostream>
#include <string>
#include <vector>
#include <sstream>
using namespace std;

#include "roster.h"
#include "student.h"
#include "securityStudent.h"
#include "softwareStudent.h"
#include "networkStudent.h"

class Roster {
public:
	Roster(int maxSize);
	void ParseStudentId(string studentData);
	//required functions E(3)(a-f)
	void add(string studentID, string firstName, string lastName, string emailAddress, int age, int daysInCourse1, int daysInCourse2, int daysInCourse3, Degree type);
	void remove(string studentID);
	void printAll();
	void printAverageDaysInCourse(string studentID);
	void printInvalidEmails();
	void printByDegreeProgram(int degreeProgram);
	int GetMaxSize();
private:
	int lastIndex;
	static int maxSize;
	Student **students;
	string studentId;
	string firstName;
	string lastName;
	string email;
	string age;
	int* daysInCourse;
	string degreeType;

};

#endif