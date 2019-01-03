/**
* @file Task1_main.cpp
*
* @brief This code implements inheritance (Task/Example1).
*
* @author Saif Ullah Ijaz
*
*/

// SYSTEM INCLUDES
#include <iostream> 
#include <string>
using namespace std;

// LOCAL INCLUDES
#include "Student.h" 
#include "Teacher.h" 
#include "Doctor.h"


// function main begins program execution
void main() {
	Student s1("Muhammad Rafael", 17, 'M',"student", "Computer Science", 2014);
	Teacher t1("Saif Ullah Ijaz", 28, 'M', "Lecturer");
	Doctor d1("Dr. Sajida Hussain", 40, 'F', "Neurosurgeon", 500000);
	

	cout << "Student 1: " << endl << "Name: " << s1.GetName() << endl << "Gender: " << s1.GetGender() << endl;
	cout << "Program: " << s1.GetProgram() << endl;
	cout << "Year of Study: " << s1.GetStudyYear() << endl;
	s1.Eat();
	s1.Walk();
	s1.Study();
	s1.HeldExam();

	cout << endl << "Teacher 1: " << endl << "Name: " << t1.GetName() << endl << "Gender: " << t1.GetGender() << endl;
	t1.Eat();
	t1.Walk();
	t1.Teach();
	t1.TakeExam();

	cout << endl << "Doctor 1: " << endl << "Name: " << d1.GetName() << endl << "Gender: " << d1.GetGender() << endl;
	d1.Eat();
	d1.Walk();
	d1.CheckUp();
	d1.Prescribe();

	system("pause");
}
// end main
