/**  Circle class inherited from Shape class.
*
* #include "Circle.h" <BR>
* -llib
*
*/
#ifndef CIRCLE_H
#define CIRCLE_H

// SYSTEM INCLUDES
#include<iostream>

// LOCAL INCLUDES
#include "Shape.h"

// Circle class definition
class Circle : public Shape {
public:

// LIFECYCLE
	/** Default + Overloaded constructor.
	*/
	Circle(const string& = "white", int = 0, float = 0.0);

	// Use compiler-generated copy constructor, assignment, and destructor.
	// Circle(const Circle&);
	// Circle& operator=(const Circle&);
	// ~Circle();


// OPERATIONS
	/** Pure virtual function that draws Circle.
	*
	* @param void
	*
	* @return void
	*/
	void Draw();

	/** function that computes area of Circle.
	*
	* @param void
	*
	* @return Area of circle
	*/
	float ComputeArea();

	
// ACCESS
	// setters
	void SetRadius(float = 0.0);
	void SetCircle(const string& = "white", int = 0, float = 0.0);
	/**
	# @overload void SetCircle(float = 0.0);
	*/
	void SetCircle(float = 0.0);
	/**
	# @overload void SetCircle(const Circle& aCircle);
	*/
	void SetCircle(const Circle& aCircle);

	// getters
	float GetRadius()const;
	const Circle& GetCircle()const;

private:

// DATA MEMBERS
	float mRadius;
};
// end class Circle
#endif  
// _CIRCLE_H_
