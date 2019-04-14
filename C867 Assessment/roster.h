#ifndef ROSTER_H
#define ROSTER_H

#include <iostream>
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
	int firstCommaLocation;
	int stringLength;
	string* studentId;

};

#endif