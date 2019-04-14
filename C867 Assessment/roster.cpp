#include "roster.h"

void Roster::SetClassRosterArray() {
	
	//cout << endl << "printing data: " << studentData[0] << endl;
	return;
}

int main() {
	char exitSign = 'a';
	SecurityStudent* arr1 = nullptr;
	arr1 = new SecurityStudent(13);
	//Roster* classRoster = nullptr;
	//classRoster = new Roster;
	
	//Provided Data Table
	//const string studentData[] = {
	//	"A1,John,Smith,John1989@gm ail.com,20,30,35,40,SECURITY"		,
	//	"A2,Suzan,Erickson,Erickson_1990@gmailcom,19,50,30,40,NETWORK"	,
	//	"A3,Jack,Napoli,The_lawyer99yahoo.com,19,20,40,33,SOFTWARE"		,
	//	"A4,Erin,Black,Erin.black@comcast.net,22,50,58,40,SECURITY"		,
	//	"A5,Robert,Morales,rmora46@my.wgu.edu,31,15,31,45,SOFTWARE"
	//};

	
	while (exitSign != 'q') {
		//int firstCommaLocation = 0;
		//int stringLength = studentData[0].find(',');
		//string studentId = studentData[0].substr(firstCommaLocation, stringLength);
		//firstCommaLocation += stringLength + 1;
		//stringLength = studentData[0].find(',', firstCommaLocation + 1) - firstCommaLocation;
		//string firstName = studentData[0].substr(firstCommaLocation, stringLength);
		//firstCommaLocation += stringLength + 1;
		//stringLength = studentData[0].find(',', firstCommaLocation + 1) - firstCommaLocation;
		//string lastName = studentData[0].substr(firstCommaLocation, stringLength);
		//firstCommaLocation += stringLength + 1;
		//stringLength = studentData[0].find(',', firstCommaLocation + 1) - firstCommaLocation;
		//string email = studentData[0].substr(firstCommaLocation, stringLength);

		//cout << studentId << endl;
		//cout << firstName << endl;
		//cout << lastName << endl;
		//cout << email << endl;
		/*arr1->SetStudentId(456);
		arr1->SetDegreeType();*/
		arr1->printData();
		
		//classRoster->SetClassRosterArray();
		

		cout << "enter 'q' to quit...";
		cin >> exitSign;
		cout << endl << endl;
	}
	
	return 0;
}