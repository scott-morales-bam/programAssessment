#include "student.h"


//2c - Constructor
Student::Student()
{
	studentId = 0;
	firstName = "emptyFirst";
	lastName = "emptyLast";
	emailAddress = "empty@man.com";
	studentAge = 10;
	//daysCourseComplete = { 0, 1, 2 }; //FIXME!! figure out how to Construct init values

	return;
}

//2a - Accessors
int Student::GetStudentId() {
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
int Student::GetStudentAge() {
	return studentAge;
}
int Student::GetDaysCourseComplete() {
	return daysCourseComplete[0];
}

//2b - Mutators
void Student::SetStudentId(int studentId) {
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
void Student::SetStudentAge(int studentAge) {
	this->studentAge = studentAge;
	return;
}
void Student::SetDaysCourseComplete(int daysCourseComplete[]) {
	for (int i = 0; i < 3; ++i) {
		this->daysCourseComplete[i] = daysCourseComplete[i];
		return;
	}
}


//2d - print specific student data
void Student::printData(){}
