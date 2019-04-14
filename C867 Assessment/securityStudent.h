#ifndef SECURITYSTUDENT_H
#define SECURITYSTUDENT_H

#include "student.h"

class SecurityStudent :	public Student {
public:
	SecurityStudent(int studentId);
	Degree GetDegreeProgram();
	void SetDegreeType();
private:
	Degree* degreeProgram;
};

#endif