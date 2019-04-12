#include "student.h"


//2c, 2e - Constructor, Destructor
Student::Student()
{
	studentId = new int;
	*studentId = 0;
	firstName = new string;
	*firstName = "emptyFirst";
	lastName = new string;
	*lastName = "emptyLast";
	emailAddress = new string;
	*emailAddress = "empty@man.com";
	studentAge = new int;
	*studentAge = 10;
	daysCourseComplete[3] = new int; //FIXME!! figure out how to Construct init values

	return;
}

Student::~Student(){
	delete studentId;
	delete firstName;
	delete lastName;
	delete emailAddress;
	delete studentAge;
}

//2a - Accessors
int Student::GetStudentId() const {
	return *studentId;
}
string Student::GetFirstName() const {
	return *firstName;
}
string Student::GetLastName() const {
	return *lastName;
}
string Student::GetEmailAddress() const {
	return *emailAddress;
}
int Student::GetStudentAge() const {
	return *studentAge;
}
int Student::GetDaysCourseComplete() const {
	return *daysCourseComplete[0];
}

//2b - Mutators
void Student::SetStudentId(const int studentId) {
	*this->studentId = studentId;
	return;
}
void Student::SetFirstName(const string firstName) {
	*this->firstName = firstName;
	return;
}
void Student::SetLastName(const string lastName) {
	*this->lastName = lastName;
	return;
}
void Student::SetEmailAddress(const string emailAddress) {
	*this->emailAddress = emailAddress;
	return;
}
void Student::SetStudentAge(const int studentAge) {
	*this->studentAge = studentAge;
	return;
}
void Student::SetDaysCourseComplete(const int daysCourseComplete[]) {
	for (int i = 0; i < 3; ++i) {
		*this->daysCourseComplete[i] = daysCourseComplete[i];
		return;
	}
}


//2d - print specific student data
void Student::printData(){
	
	return;
}
