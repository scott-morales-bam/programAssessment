#include "student.h"

//2c, 2e - Constructor, Destructor
Student::Student() {
	studentId = new string;
	cout << "new student id created" << endl;
	//firstName = new string;
	//lastName = new string;
	//emailAddress = new string;
	//studentAge = new int;
	//daysCourseComplete[3] = new int; //FIXME!! figure out how to Construct init values
	degreeType = new Degree;

	return;
}

Student::Student(string studentId) {
	this->studentId = new string;
	*this->studentId = studentId;
	cout << "created student object" << endl;
}

Student::~Student(){
	cout << "deleting studentId" << endl;
	delete studentId;
	//delete firstName;
	//delete lastName;
	//delete emailAddress;
	//delete studentAge;
	//delete daysCourseComplete;
	cout << "deleting degreeType" << endl;
	delete degreeType; 
}

//2a - Accessors
string Student::GetStudentId() const {
	return *studentId;
}
//string Student::GetFirstName() const {
//	return *firstName;
//}
//string Student::GetLastName() const {
//	return *lastName;
//}
//string Student::GetEmailAddress() const {
//	return *emailAddress;
//}
//string Student::GetStudentAge() const {
//	return *studentAge;
//}
//int Student::GetDaysCourseComplete() const {
//	return *daysCourseComplete[0];	//FIX ME!! Will have to iterate through arr
//}

//2b - Mutators
void Student::SetStudentId(const int studentId) {
	*this->studentId = studentId;
	cout << "student id set to: " << GetStudentId() << endl;
	return;
}
//void Student::SetFirstName(const string firstName) {
//	*this->firstName = firstName;
//	return;
//}
//void Student::SetLastName(const string lastName) {
//	*this->lastName = lastName;
//	return;
//}
//void Student::SetEmailAddress(const string emailAddress) {
//	*this->emailAddress = emailAddress;
//	return;
//}
//void Student::SetStudentAge(const int studentAge) {
//	*this->studentAge = studentAge;
//	return;
//}
//void Student::SetDaysCourseComplete(const int *daysCourseComplete[], int arrLength) {
//	for (int i = 0; i < arrLength; ++i) {
//		*this->daysCourseComplete[i] = *daysCourseComplete[i];
//		return;
//	}
//}
//void Student::SetDegreeType() { //   ***DONT NEED THIS***
//	*this->degreeType = deg;
//	return;
//}


//2d - print specific student data
void Student::printData(){
	cout << "Printing Student ID: " << GetStudentId() << endl;
	cout << "Printing Degree Type: " << GetDegreeProgram() << endl;
	return;
}
