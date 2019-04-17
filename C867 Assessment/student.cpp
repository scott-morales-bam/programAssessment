#include "student.h"

Student::Student() {
	studentId = new string;
	firstName = new string;
	lastName = new string;
	emailAddress = new string;
	studentAge = new string;
	daysCourseComplete[3] = new int;
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
	 this->daysCourseComplete[3] = new int;
	*this->daysCourseComplete[0] = daysInCourse1;
	*this->daysCourseComplete[1] = daysInCourse2;
	*this->daysCourseComplete[2] = daysInCourse3;
}

Student::~Student(){
	cout << "deleting studentId" << endl;
	delete studentId;
	delete firstName;
	delete lastName;
	delete emailAddress;
	delete studentAge;
	delete daysCourseComplete;
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
int Student::GetDaysCourseComplete() {
	return *daysCourseComplete[3];
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
void Student::SetDaysCourseComplete(int *daysCourseComplete[3]) {
	for (int i = 0; i < 3; ++i) {
		*this->daysCourseComplete[i] = *daysCourseComplete[i];
		return;
	}
}

void Student::printData(){
	cout << "Printing Student ID: " << GetStudentId() << endl;
	cout << "Printing Degree Type: " << GetDegreeProgram() << endl;
	return;
}
