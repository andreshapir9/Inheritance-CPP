/**  Student class inherited from Person class.
*
* #include "Student.h" <BR>
* -llib
*
*/
#ifndef STUDENT_H
#define STUDENT_H

// SYSTEM INCLUDES
#include<iostream>

// LOCAL INCLUDES
#include "Person.h"

// Student class definition
class Student : public Person {
public:
// LIFECYCLE
	/** Default + Overloaded constructor.
	*/
	Student(const string& = "", int = 0, char = '/0', const string& = "", const string& = "", int = 0);

	// Use compiler-generated copy constructor, assignment, and destructor.
	// Student(const Student&);
	// Student& operator=(const Student&);
	// ~Student();

// OPERATIONS
	/** function that depicts study of Student.
	*
	* @param void
	*
	* @return void
	*/
	void Study();

	/** function that depicts exams of Student.
	*
	* @param void
	*
	* @return void
	*/
	void HeldExam();
// ACCESS
	// setters
	void SetProgram(const string& = "");
	void SetStudyYear(int = 0);
	void SetDesignation(const string& = "Student");
	void SetStudent(const string& = "", int = 0, char = '/0', const string& = "", int = 0);
	/**
	# @overload void SetStudent(int = 0, const string& = "");
	*/
	void SetStudent(int = 0, const string& = "");
	/**
	# @overload void SetStudent(const Student& aStudent);
	*/
	void SetStudent(const Student& aStudent);

	// getters
	const string& GetProgram()const;
	int GetStudyYear()const;
	const Student& GetStudent()const;

private:

// DATA MEMBERS
	string mProgram;
	int mStudyYear;
};
// end class Student
#endif  
// _STUDENT_H_
