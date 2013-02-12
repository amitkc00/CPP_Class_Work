#include "Square.h"
#include <cstdio>
#include <iostream>

using namespace std;

//Constructor
Square::Square(string& color_IP,double sidelength_IP)
	:Shape(color_IP),sidelength(sidelength_IP)
{ 
}

double Square::area() {
	double area_calc = sidelength*sidelength;
	return area_calc;
}

string Square::toString() {
	cout<<"\n"<<getColor()<<" Square with side length of "<<sidelength<<" and area of "<<area()<<"\n";
	return "success";
}
