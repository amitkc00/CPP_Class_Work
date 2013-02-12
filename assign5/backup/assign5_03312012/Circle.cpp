#include "Circle.h"
#include <cstdio>
#include <iostream>

using namespace std;
//Constructor
Circle::Circle(string& color_IP,double radius_IP) 
	:Shape(color_IP)
{
	radius = radius_IP;	
}

double Circle::area() {
	double area_calc = 3.14*radius*radius;
	return area_calc;
}

string Circle::toString() {
	cout<<"\n"<<getColor()<<" circle with radius of "<<radius<<" and area of "<<area()<<"\n";
	return "success";
}
