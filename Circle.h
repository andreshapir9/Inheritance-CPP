#ifndef _CIRCLE_H 
#define _CIRCLE_H 

#include "Shape.h" 

class Circle :public Shape{ 
	float mRadius; 
public: 
	Circle(char* = NULL, int = 0, float = 0.0); 
	void Draw(); 
	float ComputeArea(); 
};

#endif