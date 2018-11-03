#include "Teacher.h" 
#include "Student.h" 
#include "Doctor.h" 


void main(){ 
	Student s1("Muhammad Rafael", 17, 'M', "Computer Science", 2014 ); 
	Teacher t1("Saif Ullah Ijaz", 28, 'M', "Lecturer"); 
	Doctor d1("Dr. Sajida Hussain",40,'F',"Neurosurgeon", 500000); 
	
	cout << "Student 1: " << endl << "Name: " << s1.getName() << endl << "Gender: " << s1.getGender() << endl; 
	cout << "Program: " << s1.getProgram() << endl; 
	cout << "Year of Study: " << s1.getStudyYear() << endl; 
	s1.eat(); 
	s1.walk(); 
	s1.study(); 
	s1.heldExam(); 
	
	cout << endl << "Teacher 1: " << endl << "Name: " << t1.getName() << endl << "Gender: " << t1.getGender() << endl; 
	t1.eat(); 
	t1.walk(); 
	t1.teach(); 
	t1.takeExam(); 
	
	cout << endl << "Doctor 1: " << endl << "Name: " << d1.getName() << endl << "Gender: " << d1.getGender() << endl; 
	d1.eat(); 
	d1.walk(); 
	d1.checkUp(); 
	d1.prescribe(); 
	
	system("pause"); 
}