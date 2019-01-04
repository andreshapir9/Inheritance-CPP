/**  Line class inherited from Shape class.
*
* #include "Line.h" <BR>
* -llib
*
*/
#ifndef LINE_H
#define LINE_H

// SYSTEM INCLUDES
#include<iostream>

// LOCAL INCLUDES
#include "Shape.h"

// Line class definition
class Line : public Shape {
public:

// LIFECYCLE
	/** Default + Overloaded constructor.
	*/
	Line(const string& = "white", int = 0, float = 0.0);

	// Use compiler-generated copy constructor, assignment, and destructor.
	// Line(const Line&);
	// Line& operator=(const Line&);
	// ~Line();


// OPERATIONS
	/** Pure virtual function that draws Line.
	*
	* @param void
	*
	* @return void
	*/
	void Draw();

	
// ACCESS
	// setters
	void SetLength(float = 0.0);
	void SetLine(const string& = "white", int = 0, float = 0.0);
	/**
	# @overload void SetLine(float = 0.0);
	*/
	void SetLine(float = 0.0);
	/**
	# @overload void SetLine(const Line& aLine);
	*/
	void SetLine(const Line& aLine);

	// getters
	float GetLength()const;
	const Line& GetLine()const;

private:

	// DATA MEMBERS
	float mLength;
};
// end class Line
#endif  
// _LINE_H_
