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

class Roster {
public:
	Roster();
	~Roster();
	void SetClassRosterArray();
	void ParseStudentId(string studentData);
	//required functions E(3)(a-f)
	void add(string studentID, string firstName, string lastName, string emailAddress, int age, int daysInCourse1, int daysInCourse2, int daysInCourse3, <degree program>);
	void remove(string studentID);
	void printAll();
	void printDaysInCourse(string studentID);
	void printInvalidEmails();
	void printByDegreeProgram(int degreeProgram);
private:
	Student* classRosterArray[5];
	string studentId;
	string firstName;
	string lastName;
	string email;
	string age;
	int daysleft[3];
	string degreeType;

};

#endif