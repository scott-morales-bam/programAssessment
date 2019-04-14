#ifndef ROSTER_H
#define ROSTER_H

#include <iostream>
using namespace std;

#include "roster.h"
#include "student.h"
#include "securityStudent.h"

class roster {
public:
	void SetClassRosterArray();
private:
	string* classRosterArray[2];
};

#endif