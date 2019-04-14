#include "securityStudent.h"

SecurityStudent::SecurityStudent(string studentId) : Student(studentId) {
	degreeProgram = new Degree;
	*degreeProgram = SECURITY;
	degreeType = degreeProgram;
	cout << "created securityStudent object" << endl;
}

SecurityStudent::~SecurityStudent() {
	cout << "deleting degreeProgram" << endl;
	delete degreeProgram;
}

Degree SecurityStudent::GetDegreeProgram(){
	return *degreeType;
}

void SecurityStudent::SetDegreeType() {
	degreeType = degreeProgram;
}