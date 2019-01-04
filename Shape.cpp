#include "Shape.h"  // class implemented
#include<string>
using namespace std;

// File scope starts here 

/////////////////////////////// PUBLIC ///////////////////////////////////////

//============================= LIFECYCLE ====================================

// Shape Default+Overloaded Constructor
Shape::Shape(const string& aColor, int aCoord) : mColor(aColor), mCoord(aCoord) {
	this->SetShape(aColor, aCoord);
}
// end Shape constructor 


//============================= OPERATIONS ===================================
// function that depicts rotation of Shape.
void Shape::Rotate() {
	cout << "Rotating a Shape of " << this->GetColor() << " color." << endl;
}
// end function Rotate


//============================= ACESS      ===================================

// function that sets color of Shape
void Shape::SetColor(const string& aColor) {
	this->mColor = aColor;
}
// end function SetColor

// function that sets coordinate(s) of Shape
void Shape::SetCoord(int aCoord) {
	if (aCoord < 0)
		cout << "Error: Coord cannot be neagtive." << endl;
	else
		this->mCoord = aCoord;
}
// end function SetCoord

// function that sets Shape
void Shape::SetShape(const string& aColor, int aCoord) {
	this->SetColor(aColor);
	this->SetCoord(aCoord);
}
// end function SetShape

// function that sets the Shape
void Shape::SetShape(const Shape &obj) {
	this->SetShape(obj.GetColor(), obj.GetCoord());
}
// end function SetShape

// function that gets color of Shape
const string& Shape::GetColor() const {
	return (this->mColor);
}
// end function GetColor

// function that gets coordinate(s) of Shape
int Shape::GetCoord() const {
	return this->mCoord;
}
// end function GetCoord

// function that gets the Shape
const Shape& Shape::GetShape()const {
	return *this;
}
// end function GetShape
