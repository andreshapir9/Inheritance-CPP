#ifndef Doctor_HEADER 
#define Doctor_HEADER 

#include "Person.h" 

class Doctor :public Person {
	char * Designation; 
	int Salary; 
public: 
	Doctor(char * = NULL, int = 0, char = '\0', char * = NULL, int = 0);
	void checkUp(); 
	void prescribe();
};

#endif