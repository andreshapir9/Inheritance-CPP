#ifndef _LINE_H 
#define _LINE_H 

#include "Shape.h" 

class Line :public Shape{ 
	float mLength; 
public: 
	Line(char* = NULL, int = 0, float = 0.0); 
	void Draw(); 
};

#endif