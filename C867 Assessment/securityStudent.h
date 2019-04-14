#ifndef SECURITYSTUDENT_H
#define SECURITYSTUDENT_H

#include "student.h"

class SecurityStudent :	public Student {
public:
	Degree GetDegreeProgram();
	void SetDegreeType();
private:
	Degree degreeProgram = SECURITY;
};

#endif