#include "securityStudent.h"



Degree SecurityStudent::GetDegreeProgram(){
	return *degreeType;
}

void SecurityStudent::SetDegreeType() {
	*degreeType = degreeProgram;
}