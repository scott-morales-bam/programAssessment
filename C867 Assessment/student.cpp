#include "student.h"

Student::Student() {
	studentId = new string;
	firstName = new string;
	lastName = new string;
	emailAddress = new string;
	studentAge = new string;
}

Student::Student(string studentId, string firstName, string lastName, string emailAddress, string age, int daysInCourse1, int daysInCourse2, int daysInCourse3) {
	 this->studentId = new string;
	*this->studentId = studentId;
	 this->firstName = new string;
	*this->firstName = firstName;
	 this->lastName = new string;
	*this->lastName = lastName;
	 this->emailAddress = new string;
	*this->emailAddress = emailAddress;
	 this->studentAge = new string;
	*this->studentAge = age;
	this->daysCourseComplete[0] = daysInCourse1;
	this->daysCourseComplete[1] = daysInCourse2;
	this->daysCourseComplete[2] = daysInCourse3;
}

Student::~Student(){
	cout << "deleting studentId" << endl;
	delete studentId;
	delete firstName;
	delete lastName;
	delete emailAddress;
	delete studentAge;
}

//2a - Accessors
string Student::GetStudentId() {
	return *studentId;
}
string Student::GetFirstName() {
	return *firstName;
}
string Student::GetLastName() {
	return *lastName;
}
string Student::GetEmailAddress() {
	return *emailAddress;
}
string Student::GetStudentAge() {
	return *studentAge;
}
void Student::GetDaysCourseComplete() {   //FIX ME!! this is ugly but works
	cout << "{" << daysCourseComplete[0] << ", " << daysCourseComplete[1] << ", " << daysCourseComplete[2] << "}";
	return;
}

//2b - Mutators
void Student::SetStudentId(string studentId) {
	*this->studentId = studentId;
	return;
}
void Student::SetFirstName(string firstName) {
	*this->firstName = firstName;
	return;
}
void Student::SetLastName(string lastName) {
	*this->lastName = lastName;
	return;
}
void Student::SetEmailAddress(string emailAddress) {
	*this->emailAddress = emailAddress;
	return;
}
void Student::SetStudentAge(string studentAge) {
	*this->studentAge = studentAge;
	return;
}
void Student::SetDaysCourseComplete(int daysCourseComplete[3]) {
	for (int i = 0; i < 3; ++i) {
		this->daysCourseComplete[i] = daysCourseComplete[i];
		return;
	}
}

void Student::printData(){
	cout << "1 \t First Name: " << GetFirstName() << "\t Last Name: " << GetLastName();
	cout << "\t Age: " << GetStudentAge() << "\t daysInCourse: ";
	GetDaysCourseComplete();//FIX ME!! this is ugly but works
	cout << " Degree Program: " << GetDegreeProgram() << "." << endl;
	return;
}
