#include "Circle.h"
#include <cstdio>
#include <iostream>
#include <sstream>


using namespace std;
//Constructor
Circle::Circle(string& color_IP,double radius_IP) 
	:Shape(color_IP),radius(radius_IP)
{
}

Circle::~Circle() {
	cout<<"\nCircle Destructor Called";
}

double Circle::area() {
	double area_calc = 3.14*radius*radius;
	return area_calc;
}

string Circle::toString() {
	ostringstream oss;
	oss<<getColor()<<" circle with radius of "<<radius<<" and area of "<<area()<<endl;
	return oss.str();
}
