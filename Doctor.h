/**  Doctor class inherited from Person class.
*
* #include "Doctor.h" <BR>
* -llib
*
*/
#ifndef DOCTOR_H
#define DOCTOR_H

// SYSTEM INCLUDES
#include<iostream>

// LOCAL INCLUDES
#include "Person.h"

// Doctor class definition
class Doctor : public Person {
public:
	// LIFECYCLE
	/** Default + Overloaded constructor.
	*/
	Doctor(const string& = "", int = 0, char = '/0', const string& = "", int = 0);

	// Use compiler-generated copy constructor, assignment, and destructor.
	// Doctor(const Doctor&);
	// Doctor& operator=(const Doctor&);
	// ~Doctor();

	// OPERATIONS
	/** function that depicts checking (patients) by Doctor.
	*
	* @param void
	*
	* @return void
	*/
	void CheckUp();

	/** function that depicts giving prescription by Doctor.
	*
	* @param void
	*
	* @return void
	*/
	void Prescribe();


// ACCESS
	// setters
	void SetSalary(int = 0);
	void SetDesignation(const string& = "Doctor");
	void SetDoctor(const string& = "", int = 0, char = '/0', int = 0);
	/**
	# @overload void SetDoctor(int = 0);
	*/
	void SetDoctor(int = 0);
	/**
	# @overload void SetDoctor(const Doctor& aDoctor);
	*/
	void SetDoctor(const Doctor& aDoctor);

	// getters
	int GetSalary()const;
	const Doctor& GetDoctor()const;

private:

	// DATA MEMBERS
	int mSalary;
};
// end class Doctor
#endif  
// _DOCTOR_H_
