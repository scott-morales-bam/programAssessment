#include "securityStudent.h"

SecurityStudent::SecurityStudent(string studentId, string firstName, string lastName, string emailAddress, string age, int daysInCourse1, int daysInCourse2, int daysInCourse3, Degree type) : Student(studentId, firstName, lastName, emailAddress, age, daysInCourse1, daysInCourse2, daysInCourse3) {
	//degreeProgram = new Degree;
	degreeProgram = type;
	degreeType = degreeProgram;
	cout << "created securityStudent object" << endl;
}

SecurityStudent::~SecurityStudent() {
	cout << "Security Student destructor called" << endl;
	//delete degreeProgram;
}

Degree SecurityStudent::GetDegreeProgram(){
	return degreeProgram;
}

void SecurityStudent::SetDegreeType() {
	degreeType = degreeProgram;
}