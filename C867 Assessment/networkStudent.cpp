#include "networkStudent.h"

NetworkStudent::NetworkStudent(string studentId, string firstName, string lastName, string emailAddress, string age, int daysInCourse[], Degree type) {
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