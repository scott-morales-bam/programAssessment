#include "student.h"



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


void Student::SetStudentId(int studentId) {
	this->studentAge = studentId;
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
//void Student::SetDaysCourseComplete(int daysCourseComplete) {} //FIXME!! not sure about these yet
//virtual void Student::SetDegreeType() = 0 {} //FIXME!! not sure about these yet
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