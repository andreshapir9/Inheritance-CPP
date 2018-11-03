#ifndef Teacher_HEADER 
#define Teacher_HEADER 

#include "Person.h" 

class Teacher:public Person{ 
	char * Designation; 
	int Salary; 
public: 
	Teacher(char * = NULL, int = 0, char = '\0', char * = NULL, int = 0); 
	void teach(); 
	void takeExam(); 
};

#endif