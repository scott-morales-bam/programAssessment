#include "roster.h"

Roster::Roster() {
	//Provided Data Table
	const string studentData[] = {
		"A1,John,Smith,John1989@gm ail.com,20,30,35,40,SECURITY"		,
		"A2,Suzan,Erickson,Erickson_1990@gmailcom,19,50,30,40,NETWORK"	,
		"A3,Jack,Napoli,The_lawyer99yahoo.com,19,20,40,33,SOFTWARE"		,
		"A4,Erin,Black,Erin.black@comcast.net,22,50,58,40,SECURITY"		,
		"A5,Robert,Morales,rmora46@my.wgu.edu,31,15,31,45,SOFTWARE"
	};

	//Loop through provided Data Table and create 5 default student objects
	//for (int i = 0; i < 5; ++i) {
		//use switch to determine which student object to call
	cout << "Created roster" << endl;
	ParseStudentId(studentData[0]);
	SecurityStudent* newStudent = nullptr;
	newStudent = new SecurityStudent(*studentId);
	//}
}

Roster::~Roster() {
	cout << "deleting classRosterArray" << endl;
	delete classRosterArray;
}

void Roster::ParseStudentId(string studentData) {
	this->firstCommaLocation = 0;
	this->stringLength = studentData.find(',');
	this->studentId = &studentData.substr(firstCommaLocation, stringLength);
}

void Roster::SetClassRosterArray() {
	
	//cout << endl << "printing data: " << studentData[0] << endl;
	return;
}

int main() {
	char exitSign = 'a';
	
	Roster* classRoster = nullptr;
	classRoster = new Roster;
	
	while (exitSign != 'q') {
		
		//parsing tabledata strings
		//firstCommaLocation += stringLength + 1;
		//stringLength = studentData[0].find(',', firstCommaLocation + 1) - firstCommaLocation;
		//string firstName = studentData[0].substr(firstCommaLocation, stringLength);
		//firstCommaLocation += stringLength + 1;
		//stringLength = studentData[0].find(',', firstCommaLocation + 1) - firstCommaLocation;
		//string lastName = studentData[0].substr(firstCommaLocation, stringLength);
		//firstCommaLocation += stringLength + 1;
		//stringLength = studentData[0].find(',', firstCommaLocation + 1) - firstCommaLocation;
		//string email = studentData[0].substr(firstCommaLocation, stringLength);


		cout << "enter 'q' to quit...";
		cin >> exitSign;
		cout << endl << endl;
	}
	
	return 0;
}