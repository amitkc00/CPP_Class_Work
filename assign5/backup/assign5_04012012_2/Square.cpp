#include "Square.h"
#include <cstdio>
#include <iostream>
#include <sstream>

using namespace std;

//Constructor
Square::Square(string& color_IP,double sidelength_IP)
	:Shape(color_IP),sidelength(sidelength_IP)
{ 
}

Square::~Square() {
	cout<<"\nSquare Destructor Called. \n";
}

double Square::area() {
	double area_calc = sidelength*sidelength;
	return area_calc;
}

string Square::toString() {
	ostringstream oss;
	oss<<getColor()<<" Square with side length of "<<sidelength<<" and area of "<<area()<<endl;
	return oss.str();
}
