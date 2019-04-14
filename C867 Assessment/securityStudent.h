#ifndef SECURITYSTUDENT_H
#define SECURITYSTUDENT_H

#include "student.h"

class SecurityStudent :	public Student {
public:
	SecurityStudent(string studentId);
	~SecurityStudent();
	Degree GetDegreeProgram();
	void SetDegreeType();
private:
	Degree* degreeProgram;
};

#endif