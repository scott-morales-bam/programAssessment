#include "softwareStudent.h"

SoftwareStudent::SoftwareStudent(string studentId, string firstName, string lastName, string emailAddress, string age, int daysInCourse[], Degree type)
	: Student(studentId, firstName, lastName, emailAddress, age, daysInCourse, type) {
	//degreeProgram = new Degree;
	degreeProgram = type;
	degreeType = degreeProgram;
	cout << "created SoftwareStudent object" << endl;
}

SoftwareStudent::~SoftwareStudent() {
	cout << "SoftwareStudent destructor called" << endl;
	//delete degreeProgram;
}

Degree SoftwareStudent::GetDegreeProgram() {
	return degreeProgram;
}

void SoftwareStudent::SetDegreeType() {
	degreeType = degreeProgram;
}