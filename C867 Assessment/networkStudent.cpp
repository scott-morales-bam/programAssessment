#include "networkStudent.h"

NetworkStudent::NetworkStudent(string studentId, string firstName, string lastName, string emailAddress, string age, int daysInCourse1, int daysInCourse2, int daysInCourse3, Degree type) : Student(studentId, firstName, lastName, emailAddress, age, daysInCourse1, daysInCourse2, daysInCourse3) {
	//degreeProgram = new Degree;
	degreeProgram = type;
	degreeType = degreeProgram;
	cout << "created NetworkStudent object" << endl;
}

NetworkStudent::~NetworkStudent() {
	cout << "NetworkStudent destructor called" << endl;
	//delete degreeProgram;
}

Degree NetworkStudent::GetDegreeProgram() {
	return degreeProgram;
}

void NetworkStudent::SetDegreeType() {
	degreeType = degreeProgram;
}