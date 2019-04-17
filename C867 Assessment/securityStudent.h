#ifndef SECURITYSTUDENT_H
#define SECURITYSTUDENT_H

#include "student.h"

class SecurityStudent :	public Student {
public:
	SecurityStudent(string studentId, string firstName, string lastName, string emailAddress, string age, int daysInCourse1, int daysInCourse2, int daysInCourse3, Degree type);
	~SecurityStudent();
	Degree GetDegreeProgram();
	void SetDegreeType();
private:
	Degree degreeProgram;
};

#endif