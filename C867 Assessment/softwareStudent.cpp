#include "softwareStudent.h"

SoftwareStudent::SoftwareStudent(string studentId, string firstName, string lastName, string emailAddress, string age, int daysInCourse1, int daysInCourse2, int daysInCourse3, Degree type) : Student(studentId, firstName, lastName, emailAddress, age, daysInCourse1, daysInCourse2, daysInCourse3) {
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