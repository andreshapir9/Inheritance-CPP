#include "Doctor.h"  // class implemented
#include<string>
using namespace std;

// File scope starts here 

/////////////////////////////// PUBLIC ///////////////////////////////////////

//============================= LIFECYCLE ====================================

// Doctor Default+Overloaded Constructor
Doctor::Doctor(const string& aName, int aAge, char aGender, const string& aDesignation, int aSalary) : Person(aName, aAge, aGender, aDesignation), mSalary(aSalary) {
	this->SetDoctor(aName, aAge, aGender, aSalary);
	this->SetDesignation(aDesignation);
}
// end Doctor constructor 


//============================= OPERATIONS ===================================
// function that depicts checking (patients) by Doctor.
void Doctor::CheckUp() {
	cout << this->GetName() << " is checking up." << endl;
}
// end function CheckUp

// function that depicts giving prescription by Doctor.
void Doctor::Prescribe() {
	cout << this->GetName() << " is giving prescribtion." << endl;
}
// end function Prescribe


//============================= ACESS      ===================================

// function that sets salary of Teacher
void Doctor::SetSalary(int aSalary) {
	if (aSalary < 0)
		cout << "Error: Salary cannot be nagative." << endl;
	else
		this->mSalary = aSalary;
}
// end function SetSalary

// Pure virtual function that sets designation in (Parent)Person class
void Doctor::SetDesignation(const string& aDesignation) {
	this->mDesignation = aDesignation;
}
// end function SetDesignation

// function that sets Doctor
void Doctor::SetDoctor(const string& aName, int aAge, char aGender, int aSalary) {
	this->SetPerson(aName, aAge, aGender);
	this->SetDoctor(aSalary);
}
// end function SetDoctor

// overloaded function that sets the Doctor
void Doctor::SetDoctor(int aSalary) {
	this->SetSalary(aSalary);
}
// end function SetDoctor

// overloaded function that sets the Doctor
void Doctor::SetDoctor(const Doctor& aDoctor) {
	this->SetDoctor(aDoctor.GetName(), aDoctor.GetAge(), aDoctor.GetGender(), aDoctor.GetSalary());
}
// end function SetDoctor

// function that gets salary of Doctor
int Doctor::GetSalary()const {
	return this->mSalary;
}
// end function GetSalary

// function that gets the Doctor
const Doctor& Doctor::GetDoctor()const {
	return *this;
}
// end function GetDoctor
