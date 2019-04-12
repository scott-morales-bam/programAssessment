#include <iostream>
using namespace std;

#include "roster.h"



roster::roster()
{
}


roster::~roster()
{
}

int main() {
	char exitSign = 'a';

	while (exitSign != 'q') {
		cout << "Working!" << endl;
		
		cout << "enter 'q' to quit...";
		cin >> exitSign;
		cout << endl << endl;
	}
	
	return 0;
}