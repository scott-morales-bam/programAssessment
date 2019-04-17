#ifndef SOFTWARESTUDENT_H
#define SOFTWARESTUDENT_H

#include "student.h"

class SoftwareStudent : public Student {
public:
	SoftwareStudent(string studentId, string firstName, string lastName, string emailAddress, string age, int daysInCourse1, int daysInCourse2, int daysInCourse3, Degree type);
	~SoftwareStudent();
	Degree GetDegreeProgram();
	void SetDegreeType();
private:
	Degree degreeProgram;
};

#endif