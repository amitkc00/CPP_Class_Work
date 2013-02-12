//File Name :	Rectangle.cpp
//Description :	Rectangle Class member definition.
//Author :	Amit Choudhary
//Date :	04/01/2012

#include "Rectangle.h"
#include <sstream>

using namespace std;

Rectangle::Rectangle(string& color_IP, double width_IP,double length_IP)
	:Shape(color_IP),width(width_IP),length(length_IP)
{
}

Rectangle::~Rectangle() {
	cout<<"\n Rectangle Destructor Called\n";
}

double Rectangle::area() {
	double area_calc = length * width;
	return area_calc;
}

string Rectangle::toString() {
	ostringstream oss;
	oss<<getColor()<<" Rectangle with length of "<<length<<" and width of "<<width<<" and area of "<<area()<<endl;
	return oss.str();
}


