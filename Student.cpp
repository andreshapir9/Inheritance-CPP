#include "Student.h"  // class implemented
#include<string>
using namespace std;

// File scope starts here 

/////////////////////////////// PUBLIC ///////////////////////////////////////

//============================= LIFECYCLE ====================================

// Student Default+Overloaded Constructor
Student::Student(const string& aName, int aAge, char aGender, const string& aDesignation, const string& aProgram, int aStudyYear) : Person(aName, aAge, aGender, aDesignation), mProgram(aProgram), mStudyYear(aStudyYear) {
	this->SetStudent(aName, aAge, aGender, aProgram, aStudyYear);
	this->SetDesignation(aDesignation);
}
// end Student constructor 


//============================= OPERATIONS ===================================
// function that depicts study of Student.
void Student::Study() {
	cout << this->GetName() << " is studying." << endl;
}
// end function Study

// function that depicts exams of Student.
void Student::HeldExam() {
	cout << this->GetName() << " is taking exam." << endl;
}
// end function HeldExam


//============================= ACESS      ===================================

// function that sets program of Student
void Student::SetProgram(const string& aProgram) {
	this->mProgram = aProgram;
}
// end function SetProgram

// function that sets study year of Student
void Student::SetStudyYear(int aStudyYear) {
	if (aStudyYear > 1980 && aStudyYear<2025)
		this->mStudyYear = aStudyYear;
	else
		cout << "Error: Study year out of range." << endl;
}
// end function SetStudyYear

// Pure virtual function that sets designation in (Parent)Person class
void Student::SetDesignation(const string& aDesignation) {
	if (!(aDesignation == "student" || aDesignation == "Student"))
		cout << "Invalid designation entered. Setting it to Student." << endl;
	this->mDesignation = "Student";
}
// end function SetDesignation

// function that sets Student
void Student::SetStudent(const string& aName, int aAge, char aGender, const string& aProgram, int aStudyYear) {
	this->SetPerson(aName, aAge, aGender);
	this->SetStudent(aStudyYear, aProgram);
}
// end function SetStudent

// overloaded function that sets the Student
void Student::SetStudent(int aStudyYear, const string& aProgram) {
	this->SetProgram(aProgram);
	this->SetStudyYear(aStudyYear);
}
// end function SetStudent

// overloaded function that sets the Student
void Student::SetStudent(const Student& aStudent) {
	this->SetStudent(aStudent.GetName(), aStudent.GetAge(), aStudent.GetGender(), aStudent.GetProgram(), aStudent.GetStudyYear());
}
// end function SetStudent

// function that gets program of Student
const string& Student::GetProgram()const {
	return this->mProgram;
}
// end function GetProgram

// function that gets stufy year of Student
int Student::GetStudyYear()const {
	return this->mStudyYear;
}
// end function GetStudyYear

// function that gets the Student
const Student& Student::GetStudent()const {
	return *this;
}
// end function GetStudent
