#include "roster.h"

Roster::Roster(int maxSize) {
	const string studentData[] = {  //Provided Data Table
		"A1,John,Smith,John1989@gm ail.com,20,30,35,40,SECURITY"		,
		"A2,Suzan,Erickson,Erickson_1990@gmailcom,19,50,30,40,NETWORK"	,
		"A3,Jack,Napoli,The_lawyer99yahoo.com,19,20,40,33,SOFTWARE"		,
		"A4,Erin,Black,Erin.black@comcast.net,22,50,58,40,SECURITY"		,
		"A5,Robert,Morales,rmora46@my.wgu.edu,31,15,31,45,SOFTWARE"
	};

	cout << "Created roster \n" << endl;
	this->lastIndex = -1;
	this->maxSize = maxSize;
	this->students = new Student*[maxSize]; // create new pointer array to hold student objects

	for (int i = 0; i < maxSize; ++i) {
		
		ParseStudentId(studentData[i]);
		if (degreeType == "SECURITY") {
			students[i] = new SecurityStudent(studentId, firstName, lastName, email, age, daysInCourse, SECURITY);
			++lastIndex;
		}
		else if (degreeType == "NETWORK") {
			students[i] = new NetworkStudent(studentId, firstName, lastName, email, age, daysInCourse, NETWORKING);
			++lastIndex;
		}
		else if (degreeType == "SOFTWARE") {
			students[i] = new SoftwareStudent(studentId, firstName, lastName, email, age, daysInCourse, SOFTWARE);
			++lastIndex;
		}
		else {
			cout << "Improper or unassigned degree type" << endl;
		}
	}
}

Roster::~Roster() {
	cout << "Roster destructor called" << endl;
	delete[] students;
}

Roster& Roster::operator=(const Roster& oldRoster) {  //FIX ME!! need this copy assignment op?
	cout << "Assignment op called." << endl;
	if (this != &oldRoster) {
		delete[] students;
		students = new Student*[maxSize];
		*students = *(oldRoster.students);
	}
	return *this;
}

void Roster::ParseStudentId(string studentData) {
	stringstream studentSS(studentData);
	vector<string> studentDataVector;
	//parse string
	for (int i = 0; i < 9; ++i) {
		string substr;
		getline(studentSS, substr, ',');
		studentDataVector.push_back(substr);
	}
	//set to data members
	studentId   = studentDataVector.at(0);
	firstName   = studentDataVector.at(1);
	lastName    = studentDataVector.at(2);
	email       = studentDataVector.at(3);
	age         = studentDataVector.at(4);
	this->daysInCourse = new int[3];
	for (int i = 0; i < 3; ++i) this->daysInCourse[i] = stoi(studentDataVector.at(i+5));
	degreeType  = studentDataVector.at(8);
	return;
}

void Roster::add(string studentID, string firstName, string lastName, string emailAddress, int age, int daysInCourse1, int daysInCourse2, int daysInCourse3, Degree type) {
	this->daysInCourse = new int[3];
	this->daysInCourse[0] = daysInCourse1;
	this->daysInCourse[1] = daysInCourse2;
	this->daysInCourse[2] = daysInCourse3;
	this->age = to_string(age);
	
	if (type == SECURITY) {
		students[lastIndex + 1] = new SecurityStudent(studentID, firstName, lastName, emailAddress, this->age, daysInCourse, SECURITY);
		++lastIndex;
	}
	else if (type == NETWORKING) {
		students[lastIndex + 1] = new NetworkStudent(studentID, firstName, lastName, emailAddress, this->age, daysInCourse, NETWORKING);
		++lastIndex;
	}
	else if (type == SOFTWARE) {
		students[lastIndex + 1] = new SoftwareStudent(studentID, firstName, lastName, emailAddress, this->age, daysInCourse, SOFTWARE);
		++lastIndex;
	}
	else {
		cout << "Improper or unassigned degree type" << endl;
	}
	return;
}

void Roster::remove(string studentID) {
	return;
}

void Roster::printAll() {
	for (int i = 0; i < maxSize; ++i) {
		cout << i + 1 << "   ";
		students[i]->PrintData();
	}
	return;
}

void Roster::printInvalidEmails() {
	cout << "\nPrint invalid emails: \n" << endl;
	for (int i = 0; i < maxSize; ++i) {
		string email = students[i]->GetEmailAddress();
		int positionAtSign = email.find('@');
		int periodAfterAtSign = email.find('.', positionAtSign);
		if (periodAfterAtSign == -1) cout << "\t" << email << endl;
		else if(email.find(' ') != -1) cout << "\t" << email << endl;
	}
	cout << endl;
	return;
}

void Roster::printAverageDaysInCourse(string studentID) {
	for (int i = 0; i < maxSize; ++i) {
		if (students[i]->GetStudentId() == studentID) {
			cout << "student ID: " << students[i]->GetStudentId();
			int *tempDays = students[i]->GetDaysInCourse();
			int avgDays = 0;
			for (int j = 0; j < 3; ++j) {
				avgDays += tempDays[j];
			}
			cout << "\tAverage number of days: " << avgDays / 3 << endl;
			break;
		}
	}
}

void Roster::printByDegreeProgram(Degree degreeProgram) {
	int numberMatches = 0;
	for (int i = 0; i < maxSize; ++i) {
		if (students[i]->GetDegreeProgram() == degreeProgram) {
			++numberMatches;
			cout << numberMatches << "   ";
			students[i]->PrintData();
		}
	}
	return;
}

int main() {
	int maxSize = 5;
	
	cout << "C867 Scripting and Programming\t C++    #000954923   Robert Morales" << endl << endl;
	
	Roster* classRoster = new Roster(maxSize);   //create classRoster, add each student to classRoster

	classRoster->printAll();

	classRoster->printInvalidEmails();

	for (int i = 0; i < maxSize; ++i) { //loop through printAverageDaysInCourse("A1")
		ostringstream idOSS;
		idOSS << "A" << i+1;
		classRoster->printAverageDaysInCourse(idOSS.str()); 
	}

	classRoster->printByDegreeProgram(SOFTWARE);
	
	char exitSign = 'a';
	while (exitSign != 'q') {
		

		cout << "\nenter 'q' to quit...";
		cin >> exitSign;
		cout << endl << endl;
	}
	
	return 0;
}