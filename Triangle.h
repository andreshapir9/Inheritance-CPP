#ifndef _TRIANGLE_H 
#define _TRIANGLE_H 

#include "Shape.h" 

class Triangle :public Shape{ 
	float mAngle; 
public: 
	Triangle(char* = NULL, int = 0, float = 0.0); 
	void Draw(); 
	void ComputeArea(); 
};

#endif