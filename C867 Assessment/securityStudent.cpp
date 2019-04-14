#include "securityStudent.h"

SecurityStudent::SecurityStudent(int studentId) : Student(studentId) {
	degreeProgram = new Degree;
	*degreeProgram = SECURITY;
	degreeType = degreeProgram;
}

Degree SecurityStudent::GetDegreeProgram(){
	return *degreeType;
}

void SecurityStudent::SetDegreeType() {
	degreeType = degreeProgram;
}