/**  Teacher class inherited from Person class.
*
* #include "Teacher.h" <BR>
* -llib
*
*/
#ifndef TEACHER_H
#define TEACHER_H

// SYSTEM INCLUDES
#include<iostream>

// LOCAL INCLUDES
#include "Person.h"

// Teacher class definition
class Teacher : public Person {
public:
// LIFECYCLE
	/** Default + Overloaded constructor.
	*/
	Teacher(const string& = "", int = 0, char = '/0', const string& = "", int = 0);

	// Use compiler-generated copy constructor, assignment, and destructor.
	// Teacher(const Teacher&);
	// Teacher& operator=(const Teacher&);
	// ~Teacher();

	// OPERATIONS
	/** function that depicts teaching of Teacher.
	*
	* @param void
	*
	* @return void
	*/
	void Teach();

	/** function that depicts taking exams by Teacher.
	*
	* @param void
	*
	* @return void
	*/
	void TakeExam();

	
// ACCESS
	// setters
	void SetSalary(int = 0);
	void SetDesignation(const string& = "Teacher");
	void SetTeacher(const string& = "", int = 0, char = '/0', int = 0);
	/**
	# @overload void SetTeacher(int = 0);
	*/
	void SetTeacher(int = 0);
	/**
	# @overload void SetTeacher(const Teacher& aTeacher);
	*/
	void SetTeacher(const Teacher& aTeacher);

	// getters
	int GetSalary()const;
	const Teacher& GetTeacher()const;

private:

	// DATA MEMBERS
	int mSalary;
};
// end class Teacher
#endif  
// _TEACHER_H_
