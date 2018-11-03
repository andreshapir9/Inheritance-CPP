#include "Shape.h" 

Shape::Shape(char* pSomeColor, int SomeCoord) : mColor(pSomeColor), mCoord(SomeCoord){ 
	if (pSomeColor != NULL) { 
		int Len = strlen(pSomeColor) + 1; 
		mColor = new char[Len]; 
		strcpy_s(mColor, Len, pSomeColor); 
	} 
	else { 
		int Len = strlen("invisible") + 1; 
		mColor = new char[Len]; 
		strcpy_s(mColor, Len, "invisible"); 
	} 
} 

void Shape::Draw() { 
	cout << "The Shape is drawn in " << mColor <<" color." << endl; 
}

void Shape::Rotate() { 
	cout << "Rotating a Shape of " << mColor << " color." << endl; 
} 

void Shape::SetColor(char* pSomeColor) { 
	if (pSomeColor != NULL) { 
		int Len = strlen(pSomeColor) + 1; 
		mColor = new char[Len]; 
		strcpy_s(mColor, Len, pSomeColor); 
	} 
	else { 
		int Len = strlen("invisible") + 1; 
		mColor = new char[Len]; 
		strcpy_s(mColor, Len, "invisible"); 
	} 
}