#include "networkStudent.h"

NetworkStudent::NetworkStudent(string studentId, string firstName, string lastName, string emailAddress, string age, int daysInCourse[], Degree type) 
	: Student(studentId, firstName, lastName, emailAddress, age, daysInCourse, type) {
	degreeProgram = type;
	degreeType = degreeProgram;
}

NetworkStudent::~NetworkStudent() {
	cout << "NetworkStudent destructor called" << endl;
}

Degree NetworkStudent::GetDegreeProgram() {
	return degreeProgram;
}

void NetworkStudent::PrintData() {
	int *tempdays = GetDaysInCourse(); //temp holder for daysInCourse
	cout << "First Name: " << GetFirstName() << "\tLast Name: " << GetLastName();
	cout << "\t Age: " << GetStudentAge() << "\t daysInCourse: ";
	cout << "{" << tempdays[0] << ", " << tempdays[1] << ", " << tempdays[2] << "}";
	cout << " Degree Program: Network." << endl;
	return;
}