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
	~Roster();
	Roster(const Roster& oldRoster);
	Roster& operator=(Roster oldRoster);
	friend void swap(Roster& first, Roster& second);
	void ParseStudentId(string studentData);
	//required functions E(3)(a-f)
	void add(string studentID, string firstName, string lastName, string emailAddress, int age, int daysInCourse1, int daysInCourse2, int daysInCourse3, Degree type);
	void remove(string studentID);
	void printAll();
	void printAverageDaysInCourse(string studentID);
	void printInvalidEmails();
	void printByDegreeProgram(Degree degreeProgram);
private:
	int lastIndex;
	int maxSize;
	Student **students;
	Student **tempStudents;
	string studentId;
	string firstName;
	string lastName;
	string email;
	string age;
	int *daysInCourse;
	string degreeType;

};

#endif

/*		Dynamically increase size of arr
1. Allocte a new[] array and store it in a temp pointer
2. Copy over the previous values that you want to keep
3. Delete[] the old array
4. Change the member variables, ptr and size to point to the 
   new array and hold the new size.
*/