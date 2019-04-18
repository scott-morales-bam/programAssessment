#ifndef SECURITYSTUDENT_H
#define SECURITYSTUDENT_H

#include "student.h"

class SecurityStudent :	public Student {
public:
	SecurityStudent(string studentId, string firstName, string lastName, string emailAddress, string age, int daysInCourse[], Degree type);
	~SecurityStudent();
	Degree GetDegreeProgram();
	void PrintData();
private:
	Degree degreeProgram;
};

#endif