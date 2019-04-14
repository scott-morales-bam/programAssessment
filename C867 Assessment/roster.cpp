#include "roster.h"

void roster::SetClassRosterArray() {
	const string studentData[] = {
		"A1,John,Smith,John1989@gm ail.com,20,30,35,40,SECURITY"		,
		"A2,Suzan,Erickson,Erickson_1990@gmailcom,19,50,30,40,NETWORK"	,
		"A3,Jack,Napoli,The_lawyer99yahoo.com,19,20,40,33,SOFTWARE"		,
		"A4,Erin,Black,Erin.black@comcast.net,22,50,58,40,SECURITY"		,
		"A5,Robert,Morales,rmora46@my.wgu.edu,31,15,31,45,SOFTWARE"
	};
	cout << studentData[0] << endl;
	return;
}

int main() {
	char exitSign = 'a';
	SecurityStudent* arr1 = nullptr;
	arr1 = new SecurityStudent;

	while (exitSign != 'q') {

		arr1->SetStudentId(456);
		arr1->SetDegreeType();
		arr1->printData();
		
		

		cout << "enter 'q' to quit...";
		cin >> exitSign;
		cout << endl << endl;
	}
	
	return 0;
}