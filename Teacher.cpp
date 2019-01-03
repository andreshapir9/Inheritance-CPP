#include "Teacher.h"  // class implemented
#include<string>
using namespace std;

// File scope starts here 

/////////////////////////////// PUBLIC ///////////////////////////////////////

//============================= LIFECYCLE ====================================

// Teacher Default+Overloaded Constructor
Teacher::Teacher(const string& aName, int aAge, char aGender, const string& aDesignation, int aSalary) : Person(aName, aAge, aGender, aDesignation),  mSalary(aSalary) {
	this->SetTeacher(aName, aAge, aGender, aSalary);
	this->SetDesignation(aDesignation);
}
// end Teacher constructor 


//============================= OPERATIONS ===================================
// function that depicts teaching of Teacher.
void Teacher::Teach() {
	cout << this->GetName() << " is teaching." << endl;
}
// end function Teach

// function that depicts taking exams by Teacher.
void Teacher::TakeExam() {
	cout << this->GetName() << " is taking exam." << endl;
}
// end function TakeExam


//============================= ACESS      ===================================

// function that sets salary of Teacher
void Teacher::SetSalary(int aSalary) {
	if (aSalary < 0)
		cout << "Error: Salary cannot be nagative." << endl;
	else
		this->mSalary = aSalary;
}
// end function SetSalary

// Pure virtual function that sets designation in (Parent)Person class
void Teacher::SetDesignation(const string& aDesignation) {
	this->mDesignation = aDesignation;
}
// end function SetDesignation

// function that sets Teacher
void Teacher::SetTeacher(const string& aName, int aAge, char aGender, int aSalary) {
	this->SetPerson(aName, aAge, aGender);
	this->SetTeacher(aSalary);
}
// end function SetTeacher

// overloaded function that sets the Teacher
void Teacher::SetTeacher(int aSalary) {
	this->SetSalary(aSalary);
}
// end function SetTeacher

// overloaded function that sets the Teacher
void Teacher::SetTeacher(const Teacher& aTeacher) {
	this->SetTeacher(aTeacher.GetName(), aTeacher.GetAge(), aTeacher.GetGender(), aTeacher.GetSalary());
}
// end function SetTeacher

// function that gets salary of Teacher
int Teacher::GetSalary()const {
	return this->mSalary;
}
// end function GetSalary

// function that gets the Teacher
const Teacher& Teacher::GetTeacher()const {
	return *this;
}
// end function GetTeacher
