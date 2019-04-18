#include "student.h"

Student::Student() {

}

Student::Student(string studentId, string firstName, string lastName, string emailAddress, string age, int daysInCourse[], Degree type) {
	this->studentId = studentId;
	this->firstName = firstName;
	this->lastName = lastName;
	this->emailAddress = emailAddress;
	this->studentAge = age;
	this->daysInCourse = new int[3];
	cout << daysInCourse[0] << " " << daysInCourse[1] << " " << daysInCourse[2] << endl;
	for (int i = 0; i < 3; i++) this->daysInCourse[i] = daysInCourse[i];
	for (int i = 0; i < 3; ++i) cout << this->daysInCourse[i] << ", ";
}

Student::~Student(){
	cout << "Destructor called" << endl;
	//delete dataObj;	//This throws exception
	delete daysInCourse;
}

//Student& Student::operator=(const Student& objToCopy) {  //FIX ME!! need this copy assignment op?
//	cout << "Assignment op called." << endl;
//	if (this != &objToCopy) {
//		delete dataObj;
//		dataObj = new Student;
//		*dataObj = *(objToCopy.dataObj);
//	}
//	return *this;
//}

//2a - Accessors
string Student::GetStudentId() {
	return studentId;
}
string Student::GetFirstName() {
	return firstName;
}
string Student::GetLastName() {
	return lastName;
}
string Student::GetEmailAddress() {
	return emailAddress;
}
string Student::GetStudentAge() {
	return studentAge;
}
//int* Student::GetDaysInCourse() { 
	//return daysInCourse[3];
//}
Degree Student::GetDegreeProgram() {
	return degreeType; 
}

//2b - Mutators
void Student::SetStudentId(string studentId) {
	this->studentId = studentId;
	return;
}
void Student::SetFirstName(string firstName) {
	this->firstName = firstName;
	return;
}
void Student::SetLastName(string lastName) {
	this->lastName = lastName;
	return;
}
void Student::SetEmailAddress(string emailAddress) {
	this->emailAddress = emailAddress;
	return;
}
void Student::SetStudentAge(string studentAge) {
	this->studentAge = studentAge;
	return;
}
//void Student::SetDaysCourseComplete(int daysInCourse[3]) {
//	for (int i = 0; i < 3; ++i)	*this->daysInCourse[i] = daysInCourse[i];
//}

//void Student::printData(){
//	
//	cout << "1 \t First Name: " << GetFirstName() << "\t Last Name: " << GetLastName();
//	cout << "\t Age: " << GetStudentAge() << "\t daysInCourse: ";
//	cout << "{" << daysCourseComplete[0] << ", " << daysCourseComplete[1] << ", " << daysCourseComplete[2] << "}";
//	cout << " Degree Program: " << GetDegreeProgram() << "." << endl;
//	return;
//}
