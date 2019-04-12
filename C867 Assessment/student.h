#ifndef STUDENT_H
#define STUDENT_H

#include <string>
using namespace std;

class Student
{
public:
	Student();
	void SetStudentId(int studentId);
	void SetFirstName(string firstName);
	void SetLastName(string lastName);
	void SetEmailAddress(string emailAddress);
	void SetStudentAge(int studentAge);
	void SetDaysCourseComplete(int daysCourseComplete);
	//virtual void SetDegreeType() = 0;  //supposed to be pure virtual func??
	int GetStudentId();
	string GetFirstName();
	string GetLastName();
	string GetEmailAddress();
	int GetStudentAge();
	int GetDaysCourseComplete();
	string GetDegreeType(); //supposed to be pure virtual func??

	//virtual ~Student();
private:
	int studentId;
	string firstName;
	string lastName;
	string emailAddress;
	int studentAge;
	int daysCourseComplete[3] = { 0, 1, 2 }; //FIXME!! Is this correct???
protected:
	string degreeType; //populated in subclasses
};

#endif