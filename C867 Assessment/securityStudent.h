#ifndef SECURITYSTUDENT_H
#define SECURITYSTUDENT_H

#include "student.h"

class SecurityStudent :
	public Student
{
public:
	//SecurityStudent();
	//~SecurityStudent();
	void GetDegreeProgram();
private:
	Degree degreeProgram = SECURITY;
};

#endif