#include "softwareStudent.h"

SoftwareStudent::SoftwareStudent(string studentId, string firstName, string lastName, string emailAddress, string age, int daysInCourse[], Degree type)
	: Student(studentId, firstName, lastName, emailAddress, age, daysInCourse, type) {
	//degreeProgram = new Degree;
	degreeProgram = type;
	degreeType = degreeProgram;
}

SoftwareStudent::~SoftwareStudent() {
	cout << "SoftwareStudent destructor called" << endl;
	//delete degreeProgram;
}

Degree SoftwareStudent::GetDegreeProgram() {
	return degreeProgram;
}

void SoftwareStudent::PrintData() {
	int *tempdays = GetDaysInCourse(); //temp holder for daysInCourse
	cout << "1 \t First Name: " << GetFirstName() << "\t Last Name: " << GetLastName();
	cout << "\t Age: " << GetStudentAge() << "\t daysInCourse: ";
	cout << "{" << tempdays[0] << ", " << tempdays[1] << ", " << tempdays[2] << "}";
	cout << " Degree Program: Software." << endl;
	delete tempdays;
	return;
}