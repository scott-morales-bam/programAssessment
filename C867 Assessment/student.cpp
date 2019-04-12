#include "student.h"



Student::Student()
{
	studentId = 0;
	firstName = "emptyFirst";
	lastName = "emptyLast";
	emailAddress = "empty@man.com";
	studentAge = 10;
	//daysCourseComplete = { 0, 1, 2 }; FIXME!! figure out how to Construct init values

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