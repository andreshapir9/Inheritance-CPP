/**  Shape class to define shapes in a C++ code.
*
* #include "Shape.h" <BR>
* -llib
*
*/
#ifndef SHAPE_H
#define SHAPE_H

// SYSTEM INCLUDES
#include<iostream>
using std::string;


// Shape class definition
class Shape {
public:
// LIFECYCLE
	/** Default + Overloaded constructor.
	*/
	Shape(const string& = "white", int = 0);

	// Use compiler-generated copy constructor, assignment, and destructor.
	// Shape(const Shape&);
	// Shape& operator=(const Shape&);
	// ~Shape();

// OPERATIONS
	/** Pure virtual function that depicts drawing of Shape.
	*
	* @param void
	*
	* @return void
	*/
	virtual void Draw() = 0;

	/** function that depicts rotation of Shape.
	*
	* @param void
	*
	* @return void
	*/
	void Rotate();

// ACCESS
	// setters
	void SetColor(const string& = "white");
	void SetCoord(int = 0);
	void SetShape(const string& = "white", int = 0);
	/**
	# @overload void SetShape(const Shape& aShape);
	*/
	void SetShape(const Shape& aShape);

	// getters
	const string& GetColor() const;
	int GetCoord() const;
	const Shape& GetShape()const;

private:

// DATA MEMBERS
	string mColor;
	int mCoord;
};
// end class Shape
#endif  
// _SHAPE_H_
