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