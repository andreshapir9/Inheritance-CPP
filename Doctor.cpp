#include "Doctor.h" 

Doctor::Doctor(char * aName, int anAge, char aGender, char * aDesignation, int aSalary) :Designation(aDesignation), Salary(aSalary), Person(aName, anAge, aGender){ 
	if (aDesignation != NULL) { 
		int len = strlen(aDesignation) + 1; 
		Designation = new char[len]; 
		strcpy_s(Designation, len, aDesignation); 
	} 
	else{ 
		Designation = new char; 
		strcpy_s(Designation, 1, "\0"); 
	} 
} 

void Doctor::checkUp(){
	cout << getName() << " is checking up." << endl; 
} 

void Doctor::prescribe() { 
	cout << getName() << " is giving prescribtion." << endl; 
}