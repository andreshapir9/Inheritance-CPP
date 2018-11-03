#ifndef _SHAPE_H 
#define _SHAPE_H 

#include <iostream> 
using namespace std; 

class Shape{ 
	char* mColor; 
	int mCoord; 
public: 
	Shape(char* = NULL, int = 0); 
	void Draw(); 
	void Rotate(); 
	void SetColor(char*); 
}; 

#endif