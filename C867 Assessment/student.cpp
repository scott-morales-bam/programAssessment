#include "student.h"



Student::Student()
{
	studentId = 0;
	firstName = "emptyFirst";
	lastName = "emptyLast";
	emailAddress = "empty@man.com";
	studentAge = 10;

	return;
}


void Student::SetStudentId(int studentId) {}
void Student::SetFirstName(string firstName) {}
void Student::SetLastName(string lastName) {}
void Student::SetEmailAddress(string emailAddress) {}
void Student::SetStudentAge(int studentAge) {}
//void Student::SetDaysCourseComplete(int daysCourseComplete) {}
//virtual void Student::SetDegreeType() = 0 {}
int Student::GetStudentId() {
	return 0;
}
string Student::GetFirstName() {
	return "Man";
}
string Student::GetLastName() {
	return "Cub";
}
string Student::GetEmailAddress() {
	return "mancub@gmail.com";
}
int Student::GetStudentAge() {
	return 31;
}
int Student::GetDaysCourseComplete() {
	return 8;
}
string Student::GetDegreeType() {
	return "Bach CS";
}


