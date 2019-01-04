/**
* @file Task2_main.cpp
*
* @brief This code implements inheritance (Task/Example2).
*
* @author Saif Ullah Ijaz
*
*/

// SYSTEM INCLUDES
#include <iostream> 
#include <string>
using namespace std;

// LOCAL INCLUDES
#include "Circle.h" 
#include "Line.h" 
#include "Triangle.h"


// function main begins program execution
void main() {
	Circle c1, c2("black", 3, 2.3);
	Line l1, l2("red", 4, 10.4);
	Triangle t1, t2("blue", 5, 45.76);

	c1.Draw();
	cout << "The area of the circle is: " << c1.ComputeArea() << endl << endl;
	c2.Draw();
	cout << "The area of the circle is: " << c2.ComputeArea() << endl << endl;

	l1.Draw();
	cout << endl;
	l2.Draw();
	cout << endl;

	t1.Draw();
	t1.ComputeArea();
	cout << endl;
	t2.Draw();
	t2.ComputeArea();

	system("pause");
}
// end main
