#ifndef SOFTWARESTUDENT_H
#define SOFTWARESTUDENT_H

#include "student.h"

class SoftwareStudent : public Student {
public:
	SoftwareStudent(string studentId, string firstName, string lastName, string emailAddress, string age, int daysInCourse[], Degree type);
	~SoftwareStudent();
	Degree GetDegreeProgram();
	void PrintData();
private:
	Degree degreeProgram;
};

#endif