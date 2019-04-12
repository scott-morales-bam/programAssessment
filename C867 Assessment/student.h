#ifndef STUDENT_H
#define STUDENT_H

#include <string>
using namespace std;

class Student
{
public:

	//2c - Constructor
	Student();

	//2a - Accessors
	int GetStudentId();
	string GetFirstName();
	string GetLastName();
	string GetEmailAddress();
	int GetStudentAge();
	int GetDaysCourseComplete();
	//virtual string GetDegreeProgram() = 0; //pure virtual func - set in subclass

	//2b - Mutators
	void SetStudentId(int studentId);
	void SetFirstName(string firstName);
	void SetLastName(string lastName);
	void SetEmailAddress(string emailAddress);
	void SetStudentAge(int studentAge);
	void SetDaysCourseComplete(int daysCourseComplete[]);
	//virtual void SetDegreeType() = 0;  //pure virtual func - set in subclass
	
	//2d - print specific student data
	virtual void printData();
	

	
	
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