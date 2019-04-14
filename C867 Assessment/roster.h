#ifndef ROSTER_H
#define ROSTER_H

#include <iostream>
using namespace std;

#include "roster.h"
#include "student.h"
#include "securityStudent.h"

class Roster {
public:
	void SetClassRosterArray();

private:
	
	Student* classRosterArray[1];
};

#endif