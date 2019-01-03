#include "Person.h"  // class implemented
#include<string>
using namespace std;

// File scope starts here 

/////////////////////////////// PUBLIC ///////////////////////////////////////

//============================= LIFECYCLE ====================================

// Person Default+Overloaded Constructor
Person::Person(const string& aName, int aAge, char aGender, const string& aDesignation) : mName(aName), mAge(aAge), mGender(aGender), mDesignation(aDesignation) {
	this->SetPerson(aName, aAge, aGender);
}
// end Person constructor 


//============================= OPERATIONS ===================================
// function that depicts eating of Person.
void Person::Eat() {
	cout << this->GetName() << " is eating." << endl;
}
// end function Eat

// function that depicts walking of Person.
void Person::Walk() {
	cout << this->GetName() << " is walking." << endl;
}
// end function Walk


//============================= ACESS      ===================================

// function that sets Name of Person
void Person::SetName(const string& aName) {
	this->mName = aName;
}
// end function SetName

// function that sets age of Person
void Person::SetAge(int aAge) {
	if (aAge < 1 || aAge>130)
		cout << "Error: Age out of range." << endl;
	else
		this->mAge = aAge;
}
// end function SetAge

// function that sets gender of Person
void Person::SetGender(char aGender) {
	if (aGender == 'M' || aGender == 'm' || aGender == 'F' || aGender == 'f')
		this->mGender = aGender;
	else
		cout << "Error: Gender is not recognized." << endl;
}
// end function SetGender

// function that sets Person
void Person::SetPerson(const string& aName, int aAge, char aGender) {
	this->SetName(aName);
	this->SetAge(aAge);
	this->SetGender(aGender);
}
// end function SetPerson

// function that sets the Person
void Person::SetPerson(const Person &obj) {
	this->SetPerson(obj.GetName(), obj.GetAge(), obj.GetGender());
}
// end function SetPerson

// function that gets Fist Name of Person
const string& Person::GetName() const {
	return (this->mName);
}
// end function GetName

// function that gets age of Person
int Person::GetAge() const {
	return this->mAge;
}
// end function GetAge

// function that gets gender of Person
char Person::GetGender() const {
	return this->mGender;
}
// end function GetGender

// function that gets the Person
const Person& Person::GetPerson()const {
	return *this;
}
// end function GetPerson
