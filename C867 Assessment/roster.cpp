#include <iostream>
using namespace std;

#include "roster.h"
#include "student.h"



roster::roster()
{
}


roster::~roster()
{
}

int main() {
	char exitSign = 'a';
	Student* scott = nullptr;
	scott = new Student;

	while (exitSign != 'q') {
		cout << "Student ID:        " << scott->GetStudentId() << endl;
		cout << "Student First Name:" << scott->GetFirstName() << endl;
		cout << "Student Last Name: " << scott->GetLastName() << endl;
		cout << "Student email:     " << scott->GetEmailAddress() << endl;
		cout << "Student age:       " << scott->GetStudentAge() << endl;
		cout << "Days left:         " << scott->GetDaysCourseComplete() << endl;
		cout << "Degree Type:       " << scott->GetDegreeType() << endl;
		
		cout << "enter 'q' to quit...";
		cin >> exitSign;
		cout << endl << endl;
	}
	
	return 0;
}