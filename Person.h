/**  Person class to define persons in a C++ code.
*
* #include "Person.h" <BR>
* -llib
*
*/
#ifndef PERSON_H
#define PERSON_H

// SYSTEM INCLUDES
#include<iostream>
using std::string;


// Person class definition
class Person {
public:
// LIFECYCLE
	/** Default + Overloaded constructor.
	*/
	Person(const string& = "", int = 0, char ='/0', const string& = "");

	// Use compiler-generated copy constructor, assignment, and destructor.
	// Person(const Person&);
	// Person& operator=(const Person&);
	// ~Person();

// OPERATIONS
	/** function that depicts eating of Person.
	*
	* @param void
	*
	* @return void
	*/
	void Eat();

	/** function that depicts walking of Person.
	*
	* @param void
	*
	* @return void
	*/
	void Walk();

// ACCESS
	// setters
	void SetName(const string& = "");
	void SetAge(int = 0);
	void SetGender(char = '/0');
	virtual void SetDesignation(const string& = "") = 0;
	void SetPerson(const string& = "", int = 0, char = '/0');
	/**
	# @overload void SetPerson(const Person& aPerson);
	*/
	void SetPerson(const Person& aPerson);

	// getters
	const string& GetName() const;
	int GetAge() const;
	char GetGender() const;
	const Person& GetPerson()const;

// DATA MEMBERS
protected:
	string mDesignation;

private:
	string mName;
	int mAge;
	char mGender;
};
// end class Person
#endif  
// _PERSON_H_
